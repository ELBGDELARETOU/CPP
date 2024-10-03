#include "Phonebook.class.hpp"

int main(){
    
    Phonebook fiche[8];
    int i = 0;

    std::string input;
    while (1)
    {
        std::getline(std::cin, input);
        if (i >= 8)
            i = 0;
        if (input == "EXIT")
            return(std::cout << "Bye" << std::endl, 0);
        if (input == "ADD"){
            add_function(fiche, i++);
        }
        if (input == "SEARCH"){
            search_function(fiche);
        }
    }
    return (0);
}
