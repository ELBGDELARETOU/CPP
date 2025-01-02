#include "iter.hpp"

void afficher(int& x) {
    std::cout << x << " ";
}

void afficher(float& x) {
    std::cout << x << " ";
}

void afficher(char& x) {
    std::cout << x << " ";
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};

    float tab1[] = {1.6, 2.6, 3.3, 4.4, 5.7};
    
    char tab2[] = {'s', 'a', 'd', 'q', 'p'};
    
    int length = 5;

    iter(tab, length, afficher);
    std::cout << "\n" << std::endl;
    iter(tab1, length, afficher);
    std::cout << "\n" << std::endl;
    iter(tab2, length, afficher);

    return 0;
}