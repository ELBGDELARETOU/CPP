#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "MateriaSource constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = other._materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (&other != this)
        for (int i = 0; i < 4; i++)
            this->_materia[i] = other._materia[i];
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete (_materia[i]);
    }
    // std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!_materia[i])
        {
            _materia[i] = m;
            std::cout << "Materia learnd" << std::endl;
            return;
        }
    }
    std::cout << "Couldn't learn" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] && _materia[i]->getType() == type)
            return _materia[i]->clone();
    }
    std::cout << "Uknown materia" << std::endl;
    return NULL;
}