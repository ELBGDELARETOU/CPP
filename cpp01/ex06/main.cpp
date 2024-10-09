#include "Harl.hpp"

int main(int ac, char **av){
    Harl harl;

    if (ac != 2)
        return (std::cout << "ERROR: wrong number of arguments" << std::endl, 1);
    harl.complain(av[1]);
}