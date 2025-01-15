#include "ScalarConvertor.hpp"

ScalarConvertor::ScalarConvertor() {}

ScalarConvertor::ScalarConvertor(const ScalarConvertor &other) { (void)other; }

ScalarConvertor::~ScalarConvertor() {}

ScalarConvertor &ScalarConvertor::operator=(const ScalarConvertor &other) { (void)other; return *this;}

bool isChar(const std::string &literal)
{
    if (literal.size() == 1 && !std::isdigit(literal[0]) && literal[0] != '-' && literal[0] != '+')
        return true;
    return false;
}

bool isInt(const std::string &literal)
{
    if (literal.empty()) 
        return false;
    long unsigned int i = 0;
    if (literal[0] == '-' || literal[0] == '+') {
        if (literal.size() == 1) 
            return false;
        i = 1;
    }

    for (; i < literal.size(); ++i) {
        if (!std::isdigit(literal[i])) {
            return false;
        }
    }
    return true;;
}

bool isFloat(const std::string &literal) 
{
    if (literal.empty()) return false;
    size_t len = literal.size();
    size_t i = 0;
    bool dot = false;

    if (literal == "-inff" || literal == "inff" || literal == "+inff" || literal == "-nanf" || literal == "nanf"|| literal == "+nanf")
        return true;
    if (literal[len - 1] != 'f' && literal[len - 1] != 'F')
        return false;
    if (literal[0] == '-' || literal[0] == '+') {
        if (literal.size() == 2) 
            return false;
        i = 1;
    }
    for (; i < len - 1; ++i) {
        if (literal[i] == '.') {
            if (dot) 
                return false;
            dot = true;
        } 
        else if (!isdigit(literal[i])) {
            return false;
        }
    }
    return dot;
}

bool isDouble(const std::string &literal)
{
    if (literal.empty()) 
        return false;
    size_t i = 0;
    size_t len = literal.size();
    bool dot = false;

    if (literal == "-inf" || literal == "inf" || literal == "+inf" || literal == "-nan" || literal == "nan"|| literal == "+nan")
        return true;
    if (literal[len - 1] == 'f' && literal[len - 1] == 'F')
        return false;
    if (literal[0] == '-' || literal[0] == '+') {
        if (literal.size() == 1) 
            return false;
        i = 1;
    }
    for (; i < len - 1; ++i) {
        if (literal[i] == '.') {
            if (dot) 
                return false;
            dot = true;
        } 
        else if (!isdigit(literal[i])) {
            return false;
        }
    }
    return dot;
}

int findType(const std::string &literal)
{
    if (isChar(literal) == true)
        return CHAR;
    if (isInt(literal) == true)
        return INT;
    if (isFloat(literal) == true)
        return FLOAT;
    if (isDouble(literal) == true)
        return DOUBLE;
    return 0;
}

void convertLiteral(const std::string &literal, int type)
{
    if(type == CHAR){
        char c = literal[0];
        std::cout << "char: " << c << "\n";
        std::cout << "int: " << static_cast<int>(c) << "\n";
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n";
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << "\n";
    }
    else if(type == INT)
    {
        int i = std::atoi(literal.c_str());
        if (i >= 32 && i <= 126) 
        {
            char c = static_cast<char>(i);
            std::cout << "char: " << c << "\n";
        }
    else 
    {
    std::cout << "char: Impossible\n";  // Si l'entier ne correspond pas à un caractère imprimable
    }
        std::cout << "int: " << i << "\n";
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f\n";
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << "\n";
    }
    else if(type == FLOAT)
    {
        float f = std::strtof(literal.c_str(), NULL);
        std::cout << "char: Impossible\n";
        std::cout << "int: Impossible\n";
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << "\n";
    }
    else if(type == DOUBLE)
    {
        double d = std::strtod(literal.c_str(), NULL);
        std::cout << "char: Impossible\n";
        std::cout << "int: Impossible\n";
        std::cout << "float: " << std::fixed << std::setprecision(1)<< static_cast<float>(d) << "f\n";
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << "\n";
    }
    else 
    {
        std::cout << "Impossible convertion\n";
    }
}

void ScalarConvertor::convert(const std::string &literal)
{
    int type = findType(literal);
    convertLiteral(literal, type);
}