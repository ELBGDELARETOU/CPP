#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

public:
    void highFivesGuys();
    FragTrap();
    FragTrap(const std::string &name);
    ~FragTrap();
};

#endif