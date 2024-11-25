#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
public:
    virtual void makeSound() const;
    Dog();
    Dog(const Dog &other);
    Dog operator=(const Dog &other);
    Dog(std::string type);
    ~Dog();
};

#endif