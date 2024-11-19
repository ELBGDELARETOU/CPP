#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Derived constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &other)
{
    std::cout << "Derived constructor called" << std::endl;
    name = other;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Derived destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "I am in Gate Keeper mode" << std::endl;
}