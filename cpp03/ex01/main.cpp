#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavtrap("ScavTrap");
    ClapTrap claptrap("ClapTrap");

    std::cout << "ClapTrap status" << std::endl;
    claptrap.printStatus();
    std::cout << "ScavTrap status" << std::endl;
    scavtrap.printStatus();
    
    claptrap.attack("ScavTrap");
    claptrap.takeDamage(30);
    scavtrap.guardGate();
    scavtrap.attack("ClapTrap");
    scavtrap.beRepaired(52);
    scavtrap.takeDamage(15);
    claptrap.takeDamage(100);
    claptrap.attack("ScavTrap");
    
    std::cout << "ClapTrap status" << std::endl;
    claptrap.printStatus();
    std::cout << "ScavTrap status" << std::endl;
    scavtrap.printStatus();
    return (0);
}