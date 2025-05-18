#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>

class PmergeMe {
public:
    static void sortVector(std::vector<int>& vec);
    static void sortDeque(std::deque<int>& deq);
};

#endif
