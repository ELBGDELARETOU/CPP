#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Scavtrap constructor called" << std::endl;
    name = "no name";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &other)
{
    std::cout << "Scavtrap with name constructor called" << std::endl;
    name = other;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::attack(const std::string &target)
{
    if (energyPoints > 0)
    {
        std::cout << name << " attacks " << target << ", causing " << attackDamage << " point of damage !" << std::endl;
        takeDamage(attackDamage);
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "I am in Gate Keeper mode" << std::endl;
}