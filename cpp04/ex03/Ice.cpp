#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other)
{
    (void)other;
    // std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    (void)other;
    return *this;
}

Ice::~Ice()
{
    // std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}