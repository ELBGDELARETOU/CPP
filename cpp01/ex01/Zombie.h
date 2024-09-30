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
  
    Zombie(){
        std::cout << "Constructur called" << std::endl;
    }

    ~Zombie(){
        std::cout << "Destructor called on : " << Zombie::name << std::endl;
        
    }
};

Zombie* zombieHorde( int N, std::string name );


#endif

