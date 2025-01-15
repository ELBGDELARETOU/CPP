#ifndef SCALARCONVERTOR_HPP
#define SCALARCONVERTOR_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <cctype>
#include <sstream>
#include <iomanip> 

#define CHAR  1
#define INT  2
#define FLOAT  3
#define DOUBLE 4

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