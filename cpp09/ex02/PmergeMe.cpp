#include "PmergeMe.hpp"

std::vector<size_t> generateJacobsthalIndices(size_t n) {
    std::vector<size_t> jacob;
    jacob.push_back(0);
    jacob.push_back(1);

    while (true) {
        size_t next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
        if (next >= n)
            break;
        jacob.push_back(next);
    }

    std::vector<bool> used(n, false);
    std::vector<size_t> result;

    for (int i = jacob.size() - 1; i >= 0; --i) {
        if (jacob[i] < n && !used[jacob[i]]) {
            result.push_back(jacob[i]);
            used[jacob[i]] = true;
        }
    }

    for (size_t i = 0; i < n; ++i) {
        if (!used[i])
            result.push_back(i);
    }

    return result;
}

template <typename T>
typename T::iterator binaryInsert(T& container, int value, size_t& compareCount) {
    typename T::iterator it = container.begin();
    typename T::iterator end = container.end();

    while (it < end) {
        ++compareCount;
        typename T::iterator mid = it + (end - it) / 2;
        if (*mid < value)
            it = mid + 1;
        else
            end = mid;
    }
    return container.insert(it, value);
}

template <typename T>
void fordJohnsonSort(T& container, size_t& compareCount) {
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

    fordJohnsonSort(sortedMax, compareCount);

    //SANS Jacobsthal
    // for (size_t i = 0; i < pairs.size(); ++i) {
    //     if (pairs[i].first != pairs[i].second)
    //         binaryInsert(sortedMax, pairs[i].second, compareCount);
    // }

    //AVEC Jacobsthal
    std::vector<size_t> insertOrder = generateJacobsthalIndices(pairs.size());
    for (size_t i = 0; i < insertOrder.size(); ++i) {
        size_t idx = insertOrder[i];
        if (pairs[idx].first != pairs[idx].second)
            binaryInsert(sortedMax, pairs[idx].second, compareCount);
    }
   

    container = sortedMax;
}

template <typename T>
double measureSort(T& container, size_t& compareCount) {
    clock_t start = clock();
    fordJohnsonSort(container, compareCount);
    clock_t end = clock();
    return static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
}

void PmergeMe::sortVector(std::vector<int>& vec) {
    size_t compareCount = 0;
    double duration = measureSort(vec, compareCount);
    std::cout << "Time to process a range of " << vec.size()
              << " elements with std::vector : " << duration << " ms" << std::endl;
    std::cout << "Number of binary comparisons: " << compareCount << std::endl;
}

void PmergeMe::sortDeque(std::deque<int>& deq) {
    size_t compareCount = 0;
    double duration = measureSort(deq, compareCount);
    std::cout << "Time to process a range of " << deq.size()
              << " elements with std::deque  : " << duration << " ms" << std::endl;
    std::cout << "Number of binary comparisons: " << compareCount << std::endl;
}
