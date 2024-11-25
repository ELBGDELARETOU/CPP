#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(std::string other)
{
    std::cout << "Cat with name constructor called" << std::endl;
    type = other;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    type = other.type;
}

Cat Cat::operator=(const Cat &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miaouuuuu" << std::endl;
}