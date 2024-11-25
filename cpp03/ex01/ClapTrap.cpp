#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Main constructor called" << std::endl;
    name = "no name";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &newName)
{
    std::cout << "Main constructor with name parameter called" << std::endl;
    name = newName;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
    std::cout << "Main destructor called" << std::endl;
}
void ClapTrap::printStatus()
{
    std::cout << "Hit points : " << hitPoints << std::endl;
    std::cout << "Energy points : " << energyPoints << std::endl;
    std::cout << "Attack damage : " << attackDamage << std::endl;
    std::cout << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energyPoints > 0)
    {
        attackDamage = amount;
        energyPoints--;
    }
    else
        std::cout << "No energy left !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0)
    {
        hitPoints += amount;
        energyPoints--;
    }
    else
        std::cout << "No energy left !" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
    if (energyPoints > 0)
    {
        std::cout << name << " attacks " << target << ", causing " << attackDamage << " point of damage !" << std::endl;
        takeDamage(attackDamage);
    }
}
