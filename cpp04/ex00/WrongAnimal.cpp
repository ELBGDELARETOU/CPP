#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong animal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    type = other.type;
}

WrongAnimal::WrongAnimal(const std::string other) : type(other)
{
    std::cout << "WrongAnimal constructor with name called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (&other != this)
        type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I am doing the wrong sound" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const WrongAnimal &wronganimal)
{
    os << wronganimal.getType();
    return os;
}