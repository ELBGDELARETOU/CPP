#include "Harl.hpp"

void   Harl::debug(void){
    std::cout << "I'm debuging" << std::endl;
}

void   Harl::info(void){
    std::cout << "I'm an info" << std::endl;
}

void    Harl::warning(void){
    std::cout << "I'm a warning" << std::endl;
}

void    Harl::error(void){
    std::cout << "I'm an error" << std::endl;
}

int stringToHash(const std::string& str) {
    return (str == "debug") ? 0 :
        (str == "info") ? 1 :
        (str == "warning") ? 2 :
        (str == "error") ? 3 : -1;
}

void Harl::complain(const std::string &input){
    switch(stringToHash(input)){
        case 0:
            Harl::debug();
            break;
        case 1:
            Harl::info();
            break;
        case 2:
            Harl::warning();
            break;
        case 3:
            Harl::error();
            break;
        default:
            std::cout << "ERROR: unknown input" << std::endl;
    }
}

Harl::Harl(){
    std::cout << "constructeur called" << std::endl;
}

Harl::~Harl(){
    std::cout << "destructor called" << std::endl;
}