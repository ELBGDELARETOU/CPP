#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weaponClass(NULL), name(name) {
    std::cout << "constructeur called humanB" << std::endl;
    this->name = name;
}

HumanB::~HumanB(){
    std::cout << "destructeur called humanB" << std::endl;
}

void HumanB::attack() {
    if (weaponClass) {
        std::cout << name << " attacks with their " << weaponClass->getType() << std::endl;
    } 
    else {
        std::cout << name << " has no weapon!" << std::endl;
    }
}

void HumanB::setWeapon(Weapon& weapon){
    this->weaponClass = &weapon;
}