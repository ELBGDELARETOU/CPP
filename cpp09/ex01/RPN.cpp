#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

bool RPN::isOperator(const std::string& token) const {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::applyOperator(const std::string& op, int a, int b) const {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (b == 0)
            throw std::runtime_error("Division by zero");
        return a / b;
    }
    throw std::runtime_error("Invalid operator");
}

int RPN::evaluate(const std::string& expression) {
    std::stack<int> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token.length() == 1 && isdigit(token[0])) {
            stack.push(token[0] - '0'); // chiffre de 0 à 9
        } else if (isOperator(token)) {
            if (stack.size() < 2)
                throw std::runtime_error("Not enough operands");
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            int result = applyOperator(token, a, b);
            stack.push(result);
        } else {
            throw std::runtime_error("Invalid token");
        }
    }

    if (stack.size() != 1)
        throw std::runtime_error("Invalid expression");

    return stack.top();
}
