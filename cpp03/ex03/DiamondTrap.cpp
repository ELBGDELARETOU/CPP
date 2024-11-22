#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_clap_name"), name("no name")
{
    std::cout << "DiamodTrap constructor called" << std::endl;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(std::string other) : ClapTrap(), FragTrap(), ScavTrap(),
                                              name(other)
{
    std::cout << "Diamond trap with name constructor called" << std::endl;
    ClapTrap::name = other + "_clap_name";

    this->hitPoints = FragTrap::hitPoints;
    this->attackDamage = FragTrap::attackDamage;
    this->energyPoints = ScavTrap::energyPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
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

void DiamondTrap::printStatus()
{
    std::cout << "My name is : " << name << std::endl;
    std::cout << "Hit points : " << hitPoints << std::endl;
    std::cout << "Energy points : " << energyPoints << std::endl;
    std::cout << "Attack damage : " << attackDamage << std::endl;
    std::cout << "\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}
