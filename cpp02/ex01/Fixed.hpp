#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cstring>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fractionlBits = 8;

public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    void setRawBits(int const raw);
    int toInt(void) const;
    int getRawBits(void) const;
    float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif