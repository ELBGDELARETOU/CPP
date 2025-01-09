#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
    private:
        std::vector<unsigned int> _tab;
        unsigned int _maxSize;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(unsigned int i);

        void shortestSpan();
        void longestSpan();
};

#endif