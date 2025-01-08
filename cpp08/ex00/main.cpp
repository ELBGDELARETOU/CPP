#include "easyfind.hpp"

int main()
{
    std::vector<int> lol;
    lol.push_back(1);
    lol.push_back(2);
    lol.push_back(3);
    lol.push_back(4);
    lol.push_back(5);
    lol.push_back(6);

    std::vector<int>::iterator it = easyfind(lol, 3);
    if (it != lol.end())
        std::cout << *it << std::endl;
    else
        std::cout << "Ellement not found" << std::endl;
}