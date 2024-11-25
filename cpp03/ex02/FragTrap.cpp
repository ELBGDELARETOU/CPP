#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Frag trap constructor called" << std::endl;
    name = "no name";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const std::string &other)
{
    std::cout << "Frag trap with name constructor called" << std::endl;
    name = other;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag trap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "High five ?" << std::endl;
}