#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{

public:
    void guardGate();
    ScavTrap();
    ScavTrap(const std::string &name);
    ~ScavTrap();
};

#endif