#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    void guardGate();
    ScavTrap();
    ScavTrap(const std::string &name);
    ~ScavTrap();
};

#endif