#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other)
{
    *this = other;
}
Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
        _tab = other._tab;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(unsigned int i)
{
    if (_tab.size() >= _maxSize)
        throw std::overflow_error("plus de place loulou");
    _tab.push_back(i);
}

void Span::longestSpan()
{
    if (_tab.size() < 2)
        throw std::logic_error("probleme de taille ...");

    std::vector<unsigned int>::iterator min = std::min_element(_tab.begin(), _tab.end());
    std::vector<unsigned int>::iterator max = std::max_element(_tab.begin(), _tab.end());

    std::cout << "le plus grand span est de " << *max - *min << std::endl;
}

void Span::shortestSpan()
{
   if (_tab.size() < 2)
        throw std::logic_error("Problème de taille : il faut au moins deux éléments");

    std::vector<unsigned int> tmp = _tab;
    std::sort(tmp.begin(), tmp.end());

    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    for (unsigned int i = 0; i < tmp.size() - 1; ++i) {
        unsigned int span = tmp[i + 1] - tmp[i];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    std::cout << "Le plus petit span est de " << minSpan << std::endl;
}
