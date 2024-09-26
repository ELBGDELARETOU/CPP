#include <iostream>
#include "Phonebook.class.hpp"

Phonebook::Phonebook(){
    std::cout << "Constructeur called" << std::endl;
}

Phonebook::~Phonebook(){
    std::cout << "Destructor called" << std::endl;
    return;
}