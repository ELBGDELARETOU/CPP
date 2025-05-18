#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe [positive integers...]" << std::endl;
        return 1;
    }

    std::vector<int> vec;
    for (int i = 1; i < argc; ++i) {
        std::string s(argv[i]);
        for (size_t j = 0; j < s.length(); ++j) {
            if (!isdigit(s[j])) {
                std::cerr << "Error" << std::endl;
                return 1;
            }
        }
        int num = std::atoi(argv[i]);
        if (num < 0) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        vec.push_back(num);
    }

    std::deque<int> deq(vec.begin(), vec.end());

    std::cout << "Before:";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << " " << vec[i];
    std::cout << std::endl;

    PmergeMe::sortVector(vec);
    PmergeMe::sortDeque(deq);

    std::cout << "After:";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << " " << vec[i];
    std::cout << std::endl;

    return 0;
}

