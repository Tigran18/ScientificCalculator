#pragma once
#include <string>
#include "tree.hpp"
#include <math.h>

double factorial(double n);
double Log(double base, double num);
void CalculateTheBrackets(char* text, int length, char* result);
double EvaluateWithExpressionTree(const std::string& expr);