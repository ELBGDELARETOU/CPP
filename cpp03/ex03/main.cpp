#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    FragTrap FragTrap("FragTrap");
    ClapTrap claptrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");
    DiamondTrap diamondTrap;

    std::cout << "ClavTrap status" << std::endl;
    claptrap.printStatus();
    std::cout << "FragTrap status" << std::endl;
    FragTrap.printStatus();
    std::cout << "scavTrap status" << std::endl;
    scavTrap.printStatus();
    std::cout << "DiamondTrap status" << std::endl;
    diamondTrap.printStatus();

    
    claptrap.takeDamage(30);
    FragTrap.highFivesGuys();
    FragTrap.attack("ClapTrap");
    FragTrap.beRepaired(52);
    FragTrap.takeDamage(15);
    
    std::cout << "ClavTrap status" << std::endl;
    claptrap.printStatus();
    std::cout << "FragTrap status" << std::endl;
    FragTrap.printStatus();
    return (0);
}