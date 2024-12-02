#include "ICharacter.hpp"

Character::Character() : _name("no name")
{
    // std::cout << "Default character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        _backPack[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    // std::cout << "Character with name constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        _backPack[i] = NULL;
}

Character::Character(const Character &other) : _name(other._name)
{
    // std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete _backPack[i];
        _backPack[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
        this->_backPack[i] = other._backPack[i];
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            delete _backPack[i];
            _backPack[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
            _backPack[i] = other._backPack[i]->clone();
    }
    return *this;
}

Character::~Character()
{
    // std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete _backPack[i];
}

std::string const &Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "Impossible to put materials on" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!_backPack[i])
        {
            _backPack[i] = m;
            return;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    if (_backPack[idx])
        _backPack[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    std::cout << _backPack[0] << std::endl;
    if (idx >= 0 && idx < 4 && _backPack[idx])
        _backPack[idx]->use(target);
    else
        std::cout << "No materia here" << std::endl;
}