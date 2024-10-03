#include "Weapon.h"

Weapon::Weapon(const std::string name) : type(name){
    std::cout << "constructeur called weapon" << std::endl;
}

Weapon::~Weapon(){
    std::cout << "destructeur called weapon" << std::endl;

}

const std::string Weapon::getType(){
    return(this->type);
}

void Weapon::setType(std::string newType){
    this->type = newType;
}