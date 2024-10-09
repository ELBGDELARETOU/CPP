#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cstring>
#include <cmath>

class Fixed
{
private:
    int                 value;
    static const int    fractionlBits = 8;
public:
    float toFloat(void) const;
    int toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif