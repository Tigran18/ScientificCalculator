#ifndef TREE_HPP
#define TREE_HPP
#include <string>
#include <vector>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <cctype>
#include <algorithm>
#include <cmath>

class expression_tree {
private:
    std::string expression;
public:
    expression_tree(const std::string& expr) : expression(expr) {}
    double evaluate();
};

#endif