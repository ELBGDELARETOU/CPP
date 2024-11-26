#include "Ice.hpp"

Ice::Ice() : _type("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : _type(other._type)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
        _type = other._type;
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}