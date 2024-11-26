#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
private:
    std::string _type;

public:
    Ice();
    Ice(const Ice &other);
    Ice &operator=(const Ice &ice);
    ~Ice();
};

#endif