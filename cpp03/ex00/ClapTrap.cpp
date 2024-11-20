#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor called" << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name) : name(name)
{
    std::cout << "Constructor with name parameter called" << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
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
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " point of damage !" << std::endl;
}
