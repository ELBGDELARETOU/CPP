#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap()
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    this->name = name;
    std::cout << "Constructor with name parameter called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "My stats :\nhitPoints = " << hitPoints << "; my energyPoints = " << energyPoints << "; my attackDammage = " << attackDamage << std::endl;
    std::cout << "The target is " << target << " and is taking damages" << std::endl;
    std::cout << "You got " << energyPoints << " energy points left ! " << std::endl;
    std::cout << "the target took " << attackDamage << " point(s) of dammage" << std::endl;
    std::cout << "You have been repared !" << std::endl;
    std::cout << "you got " << energyPoints << " energy points left !" << std::endl;
    std::cout << "My stats :\nhitPoints = " << hitPoints << "; my energyPoints = " << energyPoints << "; my attackDammage = " << attackDamage << std::endl;
}
