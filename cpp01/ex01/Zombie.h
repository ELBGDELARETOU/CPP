#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>
#include <sstream> 
#include <string> 
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

Zombie* zombieHorde( int N, std::string name );

#endif

