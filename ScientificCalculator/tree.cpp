#include "tree.hpp"
#include <stack>
#include <vector>
#include <stdexcept>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <iostream>

bool is_operator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

bool is_function(const std::string& token) {
    return token == "sin" || token == "cos" || token == "tan" || token == "cot" ||
        token == "log" || token == "sqrt" || token == "ln" || token == "abs" ||
        token == "asin" || token == "acos" || token == "atan" || token == "acot";
}

std::vector<std::string> tokenize(const std::string& expr) {
    std::vector<std::string> tokens;
    std::string current;
    size_t i = 0;
    while (i < expr.length()) {
        char c = expr[i];
        if (std::isspace(c)) {
            ++i;
            continue;
        }
        if (std::isdigit(c) || c == '.' || (c == '-' && (i == 0 || expr[i - 1] == '(' || is_operator(expr[i - 1])))) {
            current += c;
            ++i;
            while (i < expr.length() && (std::isdigit(expr[i]) || expr[i] == '.')) {
                current += expr[i];
                ++i;
            }
            tokens.push_back(current);
            current.clear();
            continue;
        }
        if (is_operator(c) || c == '(' || c == ')') {
            if (!current.empty()) {
                tokens.push_back(current);
                current.clear();
            }
            tokens.push_back(std::string(1, c));
            ++i;
            continue;
        }
        if (std::isalpha(c)) {
            current += c;
            ++i;
            while (i < expr.length() && std::isalpha(expr[i])) {
                current += expr[i];
                ++i;
            }
            tokens.push_back(current);
            current.clear();
            continue;
        }
        throw std::invalid_argument("Invalid character in expression: " + std::string(1, c));
    }
    if (!current.empty()) {
        tokens.push_back(current);
    }
    std::cout << "Tokens: ";
    for (const auto& token : tokens) {
        std::cout << token << " ";
    }
    std::cout << std::endl;
    return tokens;
}

bool is_number(const std::string& s) {
    if (s.empty()) return false;
    try {
        size_t pos;
        std::stod(s, &pos);
        return pos == s.length();
    }
    catch (...) {
        return false;
    }
}

int precedence(const std::string& op) {
    if (op == "+" || op == "-") return 1;
    if (op == "*" || op == "/") return 2;
    if (is_function(op)) return 3;
    return 0;
}

double apply_operator(double a, double b, const std::string& op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (b == 0) throw std::runtime_error("Division by zero");
        return a / b;
    }
    throw std::invalid_argument("Invalid operator: " + op);
}

double apply_function(const std::string& func, double value) {
    if (func == "sin") return sin(value * 3.141592653589793 / 180.0);
    if (func == "cos") return cos(value * 3.141592653589793 / 180.0);
    if (func == "tan") return tan(value * 3.141592653589793 / 180.0);
    if (func == "cot") return 1.0 / tan(value * 3.141592653589793 / 180.0);
    if (func == "log") return log10(value);
    if (func == "ln") return log(value);
    if (func == "sqrt") return sqrt(value);
    if (func == "abs") return fabs(value);
    if (func == "asin") return asin(value) * 180.0 / 3.141592653589793;
    if (func == "acos") return acos(value) * 180.0 / 3.141592653589793;
    if (func == "atan") return atan(value) * 180.0 / 3.141592653589793;
    if (func == "acot") return atan(1.0 / value) * 180.0 / 3.141592653589793;
    throw std::invalid_argument("Invalid function: " + func);
}

double expression_tree::evaluate() {
    if (expression.empty()) throw std::runtime_error("Empty expression");
    std::stack<std::string> operators;
    std::vector<std::string> postfix;
    std::vector<std::string> tokens = tokenize(expression);
    for (size_t i = 0; i < tokens.size(); ++i) {
        const auto& token = tokens[i];
        if (is_number(token)) {
            postfix.push_back(token);
        }
        else if (is_function(token)) {
            operators.push(token);
        }
        else if (token == "(") {
            operators.push(token);
        }
        else if (token == ")") {
            while (!operators.empty() && operators.top() != "(") {
                postfix.push_back(operators.top());
                operators.pop();
            }
            if (operators.empty()) throw std::invalid_argument("Mismatched parentheses");
            operators.pop();
            if (!operators.empty() && is_function(operators.top())) {
                postfix.push_back(operators.top());
                operators.pop();
            }
        }
        else if (is_operator(token[0])) {
            bool is_unary = (token == "-" && (i == 0 || tokens[i - 1] == "(" || is_function(tokens[i - 1])));
            if (is_unary) {
                postfix.push_back("0");
                operators.push("-");
            }
            else {
                while (!operators.empty() && operators.top() != "(" &&
                    precedence(operators.top()) >= precedence(token)) {
                    postfix.push_back(operators.top());
                    operators.pop();
                }
                operators.push(token);
            }
        }
        else {
            throw std::invalid_argument("Invalid token: " + token);
        }
    }
    while (!operators.empty()) {
        if (operators.top() == "(") throw std::invalid_argument("Mismatched parentheses");
        postfix.push_back(operators.top());
        operators.pop();
    }
    std::cout << "Postfix: ";
    for (const auto& token : postfix) {
        std::cout << token << " ";
    }
    std::cout << std::endl;
    std::stack<double> values;
    for (const auto& token : postfix) {
        if (is_number(token)) {
            try {
                values.push(std::stod(token));
            }
            catch (...) {
                throw std::invalid_argument("Invalid number format: " + token);
            }
        }
        else if (is_function(token)) {
            if (values.empty()) throw std::invalid_argument("Invalid expression: missing operand for function " + token);
            double a = values.top();
            values.pop();
            try {
                values.push(apply_function(token, a));
            }
            catch (const std::exception& e) {
                throw std::invalid_argument("Function evaluation failed: " + token + " (" + std::string(e.what()) + ")");
            }
        }
        else if (is_operator(token[0])) {
            if (values.size() < 2) throw std::invalid_argument("Invalid expression: insufficient operands for operator " + token + " (stack size: " + std::to_string(values.size()) + ")");
            double b = values.top();
            values.pop();
            double a = values.top();
            values.pop();
            try {
                values.push(apply_operator(a, b, token));
            }
            catch (const std::exception& e) {
                throw std::invalid_argument("Operator evaluation failed: " + token + " (" + std::string(e.what()) + ")");
            }
        }
        else {
            throw std::invalid_argument("Invalid token in postfix: " + token);
        }
    }
    if (values.size() != 1) throw std::invalid_argument("Invalid expression: incorrect number of results (stack size: " + std::to_string(values.size()) + ")");
    return values.top();
}