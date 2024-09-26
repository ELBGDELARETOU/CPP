#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie
{
private:
    
    std::string name;

public:
    
    Zombie();
    ~Zombie();
    void annouce();

    void setName(std::string &name){
        this->name = name;
    }
  

    Zombie::Zombie(){
    }

    Zombie::~Zombie(){
    }
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif

