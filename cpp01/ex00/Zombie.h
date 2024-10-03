#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie{

private:
    
    std::string name;

public:
    
    void annouce(){
        std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
    }

    void setName(std::string &name){
        this->name = name;
    }


Zombie();
~Zombie();
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif

