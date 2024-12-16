#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog::Dog(const Dog &other) : Animal(), brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
    type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called." << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Waf Waf" << std::endl;
}