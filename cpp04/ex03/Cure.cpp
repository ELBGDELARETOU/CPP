#include "Cure.hpp"

Cure::Cure() : _type("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : _type(other._type)
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    if(this != &other)
        _type = other._type;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}