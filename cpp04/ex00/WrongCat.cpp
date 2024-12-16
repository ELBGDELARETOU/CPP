#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(std::string other)
{
    std::cout << "WrongCat with name constructor called" << std::endl;
    type = other;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    type = other.type;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongSound" << std::endl;
}