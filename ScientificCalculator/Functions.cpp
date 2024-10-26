#include "Functions.h"
#include <cstdio>
#include <cstring>

bool isdigit(char c) {
    return (c >= '0' && c <= '9') || c == '.';
}

double factorial(double n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else if (n == 0 || n == 1) {
        return 1;
    }
    return 1;
}

static double applyOp(char op, double a, double b) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    }
    return 0;
}

static int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double EvaluateExpression(char* expr, int length) {
    double values[100] = {0};
    char ops[100] = {'0'};
    int valIndex = 0, opsIndex = 0;

    int i = 0;
    while (i < length) {
        if (isdigit(expr[i]) || (expr[i] == '.' && (i + 1 < length && isdigit(expr[i + 1])))) {
            double val = 0.0;
            double decimalFactor = 1.0;
            bool isDecimal = false;

            while (i < length && (isdigit(expr[i]) || expr[i] == '.')) {
                if (expr[i] == '.') {
                    isDecimal = true; 
                }
                else {
                    val = val * 10 + (expr[i] - '0'); 
                    if (isDecimal) {
                        decimalFactor *= 10;
                    }
                }
                i++;
            }
            values[valIndex++] = isDecimal ? val / decimalFactor : val; 
        }
        else if (expr[i] == '(') {
            ops[opsIndex++] = expr[i];
            i++;
        }
        else if (expr[i] == ')') {
            while (opsIndex > 0 && ops[opsIndex - 1] != '(') {
                char op = ops[--opsIndex];
                double val2 = values[--valIndex];
                double val1 = values[--valIndex];
                values[valIndex++] = applyOp(op, val1, val2);
            }
            opsIndex--;
            i++;
        }
        else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            while (opsIndex > 0 && precedence(ops[opsIndex - 1]) >= precedence(expr[i])) {
                char op = ops[--opsIndex];
                double val2 = values[--valIndex];
                double val1 = values[--valIndex];
                values[valIndex++] = applyOp(op, val1, val2);
            }
            ops[opsIndex++] = expr[i];
            i++;
        }
        else {
            i++; 
        }
    }
    while (opsIndex > 0) {
        char op = ops[--opsIndex];
        double val2 = values[--valIndex];
        double val1 = values[--valIndex];
        values[valIndex++] = applyOp(op, val1, val2);
    }

    return values[0];
}

double Log(double base, double num) {
    return log(num) /log(base);
}

void CalculateTheBrackets(char* text, int length, char* result) {
    int resultIndex = 0;  
    int i = 0;
    while (i < length) {
        if (text[i] == '(') {
            int j = i + 1;
            int bracketCount = 1; 
            while (j < length && bracketCount > 0) {
                if (text[j] == '(') {
                    bracketCount++;
                }
                else if (text[j] == ')') {
                    bracketCount--;
                }
                j++;
            }

            if (bracketCount == 0) {
                int exprLength = j - i - 1; 
                char* innerExpression = new char[exprLength + 1];
                strncpy(innerExpression, &text[i + 1], exprLength);
                innerExpression[exprLength] = '\0';
                double value = EvaluateExpression(innerExpression, exprLength);
                int written = snprintf(result + resultIndex, length - resultIndex, "%.10g", value);
                resultIndex += written;
                delete[] innerExpression;
                i = j; 
            }
        }
        else {
            result[resultIndex++] = text[i++];
        }
    }
    result[resultIndex] = '\0';
    strncpy(text, result, resultIndex + 1); 
}
