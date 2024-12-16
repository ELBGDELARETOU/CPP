#include "ScalarConvertor.hpp"

ScalarConvertor::ScalarConvertor() {}

ScalarConvertor::ScalarConvertor(const ScalarConvertor &other) { (void)other; }

ScalarConvertor::~ScalarConvertor() {}

ScalarConvertor &ScalarConvertor::operator=(const ScalarConvertor &other) { (void)other; }

int checkException(const std::string &literal)
{
    if (literal == "nan" || literal == "nanf" ||
        literal == "+inf" || literal == "inf" || literal == "-inf" ||
        literal == "+inff" || literal == "inff" || literal == "-inff")
        return (std::cout << "ERROR" << std::endl, 1);
    else
        return (0);
}

void charConvertor(double value)
{
    if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max() || std::isnan(value))
        return (std::cout << "Char convertor ERROR" << std::endl, 1);
    else if (!std::isprint(static_cast<int>(value)))
        return (std::cout << "Non printable value" << std::endl, 1);
    else
    {
        value = static_cast<char>(value);
        std::cout << "Char value : " << value << std::endl;
    }
    return 0;
}

void intConvertor(double value)
{
}
void intConvertor(double value)
{
}
void intConvertor(double value)
{
}

void ScalarConvertor::convert(const std::string &literal)
{
    if (literal.length() == 1 && std::isprint(literal[0] && !std::isdigit(literal[0])))
    {
        std::cout << "type detected: char" << std::endl;
        char c = literal[0];
        charConvertor(static_cast<double>(c));
        intConvertor(static_cast<double>(c));
        floatConvertor(static_cast<double>(c));
        doubleConvertor(static_cast<double>(c));
    }
}