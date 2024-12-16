#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &other) : Animal(), brain(new Brain(*other.brain))
{
    std::cout << "Cat copy constructor called" << std::endl;
    type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called." << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miaouuuuu" << std::endl;
}