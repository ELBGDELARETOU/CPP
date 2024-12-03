#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    // std::cout << "AMateria constructor with type called" << std::endl;
}

AMateria::~AMateria()
{
    
    // std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    // std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

std::string const &AMateria::getType() const
{
    return (type);
}