#include "ClapTrap.hpp"

int main()
{
    ClapTrap tmp("john");

    tmp.printStatus();
    tmp.takeDamage(3);
    tmp.printStatus();
    tmp.beRepaired(1);
    tmp.printStatus();
    tmp.attack("pol");
    tmp.printStatus();

}