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
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    Fixed operator+(const Fixed &other);
    Fixed operator-(const Fixed &other);
    Fixed operator/(const Fixed &other);
    Fixed operator*(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    static const Fixed &max(const Fixed &nb1, const Fixed &nb2);
    static const Fixed &min(const Fixed &nb1, const Fixed &nb2);
    Fixed min(Fixed &nb1, Fixed &nb2);
    Fixed max(Fixed &nb1, Fixed &nb2);
    ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif