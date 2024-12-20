#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
protected:
public:
    virtual ~ICharacter() {}

    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter
{
protected:
    std::string _name;
    AMateria *_backPack[4];

public:
    Character();
    Character(std::string name);
    Character(const Character &other);
    Character &operator=(const Character &other);
    ~Character();

    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif