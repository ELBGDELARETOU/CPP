#ifndef MUTANtSTACK_HPP
#define MUTANtSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        ~MutantStack();
        MutantStack<T> & operator=(const MutantStack &other);

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"

#endif