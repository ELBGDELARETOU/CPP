#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other)
{
    // std::cout << "Cure copy constructor called" << std::endl;
    (void)other;
}

Cure &Cure::operator=(const Cure &other)
{
   (void)other;
    return *this;
}

Cure::~Cure()
{
    // std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
AMateria *Cure::clone() const
{

    return new Cure(*this);
}