#pragma once
#include <stack>
#include <string>

// Функция для вычисления простых выражений
double calculateSimpleExpression(double num1, double num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0)
            return num1 / num2;
        else {
            return 0;
        }

    default:
        return 0;
    }
}

// Функция для вычисления выражений в скобках
double calculateInsideBrackets(std::string expression) {
    std::stack<double> values;
    std::stack<char> ops;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == ' ') {
            i++;
            continue;
        }

        // Если цифра - собираем число
        if (isdigit(expression[i])) {
            double value = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                value = (value * 10) + (expression[i] - '0');
                i++;
            }
            values.push(value);
        }
        else if (expression[i] == '(') {
            ops.push(expression[i]);
        }
        else if (expression[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                double val2 = values.top();
                values.pop();

                double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(calculateSimpleExpression(val1, val2, op));
            }
            ops.pop(); // Удалить '('
        }
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            while (!ops.empty() && precedence(ops.top()) >= precedence(expression[i])) {
                double val2 = values.top();
                values.pop();

                double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(calculateSimpleExpression(val1, val2, op));
            }
            ops.push(expression[i]);
        }
        i++;
    }

    while (!ops.empty()) {
        double val2 = values.top();
        values.pop();

        double val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(calculateSimpleExpression(val1, val2, op));
    }

    return values.top();
}

// Функция для определения приоритета операторов
static int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}




double factorial(double n);