#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    FragTrap FragTrap("FragTrap");
    ClapTrap claptrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");
    DiamondTrap diamondTrap("DiamondTrap");

    std::cout << "\nClapTrap status" << std::endl;
    claptrap.printStatus();
    std::cout << "FragTrap status" << std::endl;
    FragTrap.printStatus();
    std::cout << "scavTrap status" << std::endl;
    scavTrap.printStatus();
    std::cout << "DiamondTrap status" << std::endl;
    diamondTrap.printStatus();

    diamondTrap.whoAmI();
    diamondTrap.attack("baltazard");
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    claptrap.takeDamage(30);
    FragTrap.highFivesGuys();
    FragTrap.attack("ClapTrap");
    FragTrap.beRepaired(52);
    FragTrap.takeDamage(15);
    
    std::cout << "ClapTrap status" << std::endl;
    claptrap.printStatus();
    std::cout << "FragTrap status" << std::endl;
    FragTrap.printStatus();
    return (0);
}

