#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :  ClapTrap("ScavTrap Default")
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = "no name";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &other) :  ClapTrap("ScavTrap Default")
{
    std::cout << "ScavTrap with name constructor called" << std::endl;
    this->name = other;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
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
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "I am in Gate Keeper mode" << std::endl;
}