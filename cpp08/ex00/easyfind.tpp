#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& t, int n){
    typename T::iterator it = std::find(t.begin(), t.end(), n);
    return it;
}

#endif