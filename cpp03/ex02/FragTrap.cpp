#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Derived constructor called" << std::endl;
    name = "no name";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const std::string &other)
{
    std::cout << "Derived with name constructor called" << std::endl;
    name = other;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Derived destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "High five ?" << std::endl;
}