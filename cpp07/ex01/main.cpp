#include "iter.hpp"

template <typename T, typename P>

void iter(T* array, int length, P func)
{
    for (int i = 0; i < length; i++)
        func(array[i]);
}

template <typename T>
void afficher(T& x) {
    std::cout << x << " ";
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};

    float tab1[] = {1.6, 2.6, 3.3, 4.4, 5.7};
    
    char tab2[] = {'s', 'a', 'd', 'q', 'p'};
    
    int length = 5;

    iter(tab, length, afficher<int>);
    std::cout << "\n" << std::endl;
    iter(tab1, length, afficher<float>);
    std::cout << "\n" << std::endl;
    iter(tab2, length, afficher<char>);

    return 0;
}