#include "PmergeMe.hpp"

template <typename T>
typename T::iterator binaryInsert(T& container, int value) {
    typename T::iterator it = container.begin();
    typename T::iterator end = container.end();

    while (it < end) {
        typename T::iterator mid = it + (end - it) / 2;
        if (*mid < value)
            it = mid + 1;
        else
            end = mid;
    }
    return container.insert(it, value);
}

template <typename T>
void fordJohnsonSort(T& container) {
    if (container.size() <= 1)
        return;

    typedef typename T::value_type value_type;
    std::vector<std::pair<value_type, value_type> > pairs;

    typename T::iterator it = container.begin();
    while (it != container.end()) {
        value_type first = *it++;
        value_type second = 0;
        if (it != container.end())
            second = *it++;
        else {
            pairs.push_back(std::make_pair(first, first));
            break;
        }

        if (first < second)
            pairs.push_back(std::make_pair(second, first));
        else
            pairs.push_back(std::make_pair(first, second));
    }

    T sortedMax;
    for (size_t i = 0; i < pairs.size(); ++i)
        sortedMax.push_back(pairs[i].first);
    fordJohnsonSort(sortedMax);

    for (size_t i = 0; i < pairs.size(); ++i) {
        if (pairs[i].first != pairs[i].second)
            binaryInsert(sortedMax, pairs[i].second);
    }

    container = sortedMax;
}

template <typename T>
double measureSort(T& container) {
    clock_t start = clock();
    fordJohnsonSort(container);
    clock_t end = clock();
    return static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
}

void PmergeMe::sortVector(std::vector<int>& vec) {
    double duration = measureSort(vec);
    std::cout << "Time to process a range of " << vec.size()
              << " elements with std::vector : " << duration << " ms" << std::endl;
}

void PmergeMe::sortDeque(std::deque<int>& deq) {
    double duration = measureSort(deq);
    std::cout << "Time to process a range of " << deq.size()
              << " elements with std::deque  : " << duration << " ms" << std::endl;
}

template void fordJohnsonSort(std::vector<int>&);
template void fordJohnsonSort(std::deque<int>&);
template double measureSort(std::vector<int>&);
template double measureSort(std::deque<int>&);
