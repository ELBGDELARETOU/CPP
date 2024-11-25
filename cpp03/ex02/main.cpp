#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
    FragTrap FragTrap("ScavTrap");
    ClapTrap claptrap("ClapTrap");

    std::cout << "ClapTrap status" << std::endl;
    claptrap.printStatus();
    std::cout << "ScavTrap status" << std::endl;
    FragTrap.printStatus();
    
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