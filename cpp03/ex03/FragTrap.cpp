#include "FragTrap.hpp"

FragTrap::FragTrap() :  ClapTrap("FragTrap Default")
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = "no name";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string &other) :  ClapTrap("FragTrap Default")
{
    std::cout << "FragTrap with name constructor called" << std::endl;
    this->name = other;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "High five ?" << std::endl;
}