#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>    
#include <exception>    

template <typename T>

class Array 
{
    private:
        T* tab;
        unsigned int len;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        T& operator[](unsigned int i);
        ~Array();
        unsigned int size();
};

#include "Array.tpp"

#endif