
#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB{

private:

    Weapon weaponClass;
    std::string name;
    std::string weapon;

    
public:
    void attack();
    void setWeapon(Weapon weaponClass);
    HumanB(std::string name);
    ~HumanB();
};

#endif