#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>

class Cure
{
private:
    std::string _type;

public:
    Cure();
    Cure(const Cure &other);
    Cure &operator=(const Cure &ice);
    ~Cure();
};

#endif