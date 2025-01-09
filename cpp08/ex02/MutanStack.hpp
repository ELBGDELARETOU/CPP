#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack>
#include "MutanStack.tpp"

template <typename T>
class MutanStack
{
    private:
        std::stack<T> tab;
    public:
        MutanStack();
        MutanStack(const MutanStack &other);
        MutanStack operator=(const MutanStack &other);
        ~MutanStack();

        void push(const T& value);
        void pop();
        T& top();
        bool empty();
        size_t size();
};


#endif