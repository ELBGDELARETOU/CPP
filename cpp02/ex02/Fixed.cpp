#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
    // std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    // std::cout << "GetRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const val){
    // std::cout << "SetRawBits member functioncalled" << std::endl;
    this->value = val;
}

Fixed& Fixed::operator=(const Fixed& other){
    // std::cout << "Copy assignement consturctor called" << std::endl;
    if(this != &other)
        value = other.getRawBits();
    return *this;
}
//_________________________________________________________________________________________//

bool Fixed::operator>(const Fixed& other) const{
    // std::cout << "Compare consturctor called" << std::endl;
    return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const{
    // std::cout << "Compare consturctor called" << std::endl;
    return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const{
    // std::cout << "Compare consturctor called" << std::endl;
    return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const{
    // std::cout << "Compare consturctor called" << std::endl;
    return this->value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const{
    // std::cout << "Compare consturctor called" << std::endl;
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const{
    // std::cout << "Compare consturctor called" << std::endl;
    return this->value != other.value;
}

/* __________________________________________________________________________________ */


Fixed Fixed::operator+(const Fixed& other){
    // std::cout << "Addition consturctor called" << std::endl;
    Fixed result;
    result.value = this->value + other.value;
    return result.toFloat();
}

Fixed Fixed::operator-(const Fixed& other){
    // std::cout << "Addition consturctor called" << std::endl;
    Fixed result;
    result.value = this->value - other.value;
    return result.toFloat();
}

Fixed Fixed::operator/(const Fixed& other){
    // std::cout << "Addition consturctor called" << std::endl;
    Fixed result;
    result.value = this->value / other.value;
    return result.toFloat();
}

Fixed Fixed::operator*(const Fixed& other){
    // std::cout << "Addition consturctor called" << std::endl;
    Fixed result;
    result.value = (this->value * other.value) >> fractionlBits;
    return result.toFloat();
}

/* __________________________________________________________________________________ */

Fixed& Fixed::operator++(){
    this->value += 1 ;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    this->value++;
    return tmp;
}

Fixed& Fixed::operator--(){
    this->value -= 1 ;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    this->value--;
    return tmp;
}

/* __________________________________________________________________________________ */

const Fixed& Fixed::min(const Fixed &nb1, const Fixed &nb2){
    if (nb1 < nb2)
        return nb1;
    return nb2;
}

const Fixed& Fixed::max(const Fixed &nb1, const Fixed &nb2){
    if (nb1 < nb2)
        return nb2;
    return nb1;
}

Fixed Fixed::min( Fixed &nb1,  Fixed &nb2){
    if (nb1 < nb2)
        return nb1;
    return nb2;
}

Fixed Fixed::max(Fixed &nb1, Fixed &nb2){
    if (nb1 < nb2)
        return nb2;
    return nb1;
}

/* __________________________________________________________________________________ */

Fixed::Fixed(const int val){
    this->value = val << fractionlBits;
    // std::cout << "INT constructor called" << std::endl;
}

Fixed::Fixed(const float val){
    this->value = static_cast<int>(roundf(val * (1 << fractionlBits)));
    // std::cout << "FLOAT constructor called" << std::endl;
}

float Fixed::toFloat(void) const{
     return static_cast<float>(this->value) / (1 << this->fractionlBits);
}

int Fixed::toInt(void) const{
    return(this->value >> this->fractionlBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}