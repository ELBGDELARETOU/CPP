#include "Phonebook.class.hpp"

int main(){
    
    Phonebook phonebook;
    std::string input;
    
    while (1)
    {
        std::getline(std::cin, input);
        if (input == "EXIT" || std::cin.eof())
            return(std::cout << "Bye" << std::endl, 0);
        if (input == "ADD")
            phonebook.addContact();
        if (input == "SEARCH")
            phonebook.searchContacts();
    }
    return (0);
}
