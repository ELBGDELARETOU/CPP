#include "Dog.hpp"

Dog::Dog() 
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string other)
{
    std::cout << "Dog with name constructor called" << std::endl;
    type = other;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    type = other.type;
}

void Dog::makeSound() const
{
    std::cout << "Waf Waf" << std::endl;
}