#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    std::cout << "GetRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const val)
{
    std::cout << "SetRawBits member functioncalled" << std::endl;
    this->value = val;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignement consturctor called" << std::endl;
    if (this != &other)
        value = other.getRawBits();
    return *this;
}

/* __________________________________________________________________________________ */

Fixed::Fixed(const int val)
{
    this->value = val << fractionlBits;
    std::cout << "INT constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
    this->value = static_cast<int>(roundf(val * (1 << fractionlBits)));
    std::cout << "FLOAT constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->value) / (1 << this->fractionlBits);
}

int Fixed::toInt(void) const
{
    return (this->value >> this->fractionlBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}