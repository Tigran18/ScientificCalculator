#include "Functions.h"
#include <cstdio>
#include <cstring>

double factorial(double n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else if (n == 0 || n == 1) {
        return 1;
    }
    return 1;
}

double Log(double base, double num) {
    return log(num) / log(base);
}

void CalculateTheBrackets(char* text, int length, char* result) {
    try {
        std::string expr(text, length);
        double value = EvaluateWithExpressionTree(expr);
        int written = snprintf(result, length + 1, "%.10g", value);
        result[written] = '\0';
    }
    catch (const std::exception& e) {
        strncpy(result, "Error", length + 1);
    }
    catch (...) {
        strncpy(result, "Error", length + 1);
    }
}

double EvaluateWithExpressionTree(const std::string& expr) {
    try {
        expression_tree tree(expr);
        return tree.evaluate();
    }
    catch (const std::exception& e) {
        throw;
    }
}