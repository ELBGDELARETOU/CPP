#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cstring>

class Fixed
{
private:
    int                 value;
    static const int    fractionlBits = 8;
public:
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
};

#endif