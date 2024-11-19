#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include "ScavTrap.hpp"

int    main( void ) {
    ScavTrap scavtrap("ScavTrap");
    ClapTrap claptrap("ClapTrap");

    // claptrap.printStat();
    // scavtrap.printStat();
    scavtrap.guardGate();
    scavtrap.attack("ClapTrap");
    claptrap.takeDamage(30);
    scavtrap.beRepaired(52);
    scavtrap.takeDamage(15);

    for (int i = 0; i < 50; ++i) {
        scavtrap.beRepaired(12);
    }

    for (int i = 0; i < 5; ++i) {
        claptrap.beRepaired(12);
    }
    // claptrap.printStat();
    // scavtrap.printStat();
    return (0);
}