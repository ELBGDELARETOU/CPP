#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    std::cout << "GetRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const val){
    std::cout << "SetRawBits member functioncalled" << std::endl;
    this->value = val;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignement consturctor called" << std::endl;
    if(this != &other)
        value = other.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();

}