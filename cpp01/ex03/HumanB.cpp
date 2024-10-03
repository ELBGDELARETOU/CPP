#include "HumanB.h"

HumanB::HumanB(std::string name) : weaponClass("peace"), name(name) {
    std::cout << "constructeur called humanB" << std::endl;
    this->name = name;
}

HumanB::~HumanB(){
    std::cout << "destructeur called humanB" << std::endl;
}

void HumanB::attack(){
    std::cout << this->name << " attacks with their" << this->weapon << std::endl;
}

void HumanB::setWeapon(Weapon weapon){
    this->weapon = weapon.getType();
}