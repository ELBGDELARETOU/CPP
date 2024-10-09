
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{

private:

    const Weapon* weaponClass;
    std::string name;
    
public:
    void attack();
    void setWeapon(Weapon &weaponClass);
    HumanB(std::string name);
    ~HumanB();
};

#endif