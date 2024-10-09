#include "Weapon.hpp"

Weapon::Weapon(const std::string name) : type(name){
    std::cout << "constructeur called weapon" << std::endl;
}

Weapon::~Weapon(){
    std::cout << "destructeur called weapon" << std::endl;

}

const std::string& Weapon::getType() const{
    return(this->type);
}

void Weapon::setType(std::string newType){
    this->type = newType;
}