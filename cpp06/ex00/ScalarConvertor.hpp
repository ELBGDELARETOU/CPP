#ifndef SCALARCONVERTOR_HPP
#define SCALARCONVERTOR_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <cctype>

class ScalarConvertor
{
private:
    ScalarConvertor();
    ~ScalarConvertor();
    ScalarConvertor(const ScalarConvertor &other);
    ScalarConvertor &operator=(const ScalarConvertor &other);

public:
    static void convert(const std::string &literal);
};

#endif