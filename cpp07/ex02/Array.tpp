#include "Array.hpp"

template <typename T>
Array<T>::Array() : tab(NULL), len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : len(n) {
    tab = new T[n];
}

template <typename T>
Array<T>::Array(const Array &other) : len(other.len) {
    tab = new T[other.len];
    for (unsigned int i = 0; i < other.len; i++)
        tab[i] = other.tab[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other){
    if (this != &other){
        delete [] tab;
        len = other.len;
        tab = new T[len];
        for (unsigned int i = 0; i < other.len; i++)
            tab[i] = other.tab[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array(){
    delete[] tab;
}

template <typename T>
T& Array<T>::operator[](unsigned int i){
    if (i >= len)
        throw std::out_of_range("ERROR : POSITION DONT EXIST");
    return tab[i];
}

template <typename T>
unsigned int Array<T>::size(){
    return len;
}