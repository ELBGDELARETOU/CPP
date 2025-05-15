#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>

class RPN {
public:
    RPN();
    ~RPN();
    int evaluate(const std::string& expression);

private:
    bool isOperator(const std::string& token) const;
    int applyOperator(const std::string& op, int a, int b) const;
};

#endif
