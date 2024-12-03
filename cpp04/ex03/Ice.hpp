#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{

public:
    Ice();
    Ice(const Ice &other);
    Ice &operator=(const Ice &ice);
    ~Ice();

    virtual AMateria *clone() const;
    void use(ICharacter &target);
};

#endif