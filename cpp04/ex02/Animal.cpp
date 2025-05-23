#include "Animal.hpp"

Animal::Animal() : type("Generic animal")
{
    std::cout << "Animal constructor called" << std::endl;
};

Animal::Animal(const std::string other) : type(other)
{
    std::cout << "Animal with name constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    type = other.type;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return (type);
}

std::ostream &operator<<(std::ostream &os, const Animal &animal)
{
    os << animal.getType();
    return os;
}