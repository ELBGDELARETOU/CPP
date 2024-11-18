#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string &name)
{
    std::cout << "Constructor with name parameter called" << std::endl;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "the target is " << target;
    takeDamage(3);
    std::cout << " you got " << energyPoints << " left ! ";
    std::cout << "the target took " << attackDamage - 0;
    beRepaired(1);
    std::cout << " you got " << energyPoints << "left !";

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energyPoints > 0)
    {
        attackDamage -= amount;
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