#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
    std::cout << "constructeur called humanA" << std::endl;
}

HumanA::~HumanA(){
    std::cout << "destructeur called humanA" << std::endl;
}

void HumanA::HumanA::attack(){
    std::cout << this->name << " attacks with their" << weapon.getType() << std::endl;
}