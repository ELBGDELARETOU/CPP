#include "swap.hpp"

int main(int ac, char **av){
    if (ac != 4)
        return (std::cout << "ERROR: wrong number of arguments" << std::endl, 1);
    find_and_replace(av[1], av[2], av[3]);
}