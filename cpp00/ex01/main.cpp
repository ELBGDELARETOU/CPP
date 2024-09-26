#include "Phonebook.class.hpp"
#include <iostream>
#include <cstring>

std::string printFormatFirstName(Phonebook *fiche, int i)
{
    int size = 0;
    std::string res;

    res = fiche[i].getFistName();
    if(res.size() > 10){
        res.insert(9, ".");
        res = res.substr(0,10);
    }
    else{
        while(res.size() != 10){
            res.insert(0, " ");
        }
    }
    return(res);
}

std::string printFormatLastName(Phonebook *fiche, int i)
{
    int size = 0;
    std::string res;

    res = fiche[i].getLastName();
    if(res.size() > 10){
        res.insert(9, ".");
        res = res.substr(0,10);
    }
    else{
        while(res.size() != 10){
            res.insert(0, " ");
        }
    }
    return(res);
}
std::string printFormatNickName(Phonebook *fiche, int i)
{
    int size = 0;
    std::string res;

    res = fiche[i].getNickName();
    if(res.size() > 10){
        res.insert(9, ".");
        res = res.substr(0,10);
    }
    else{
        while(res.size() != 10){
            res.insert(0, " ");
        }
    }
    return(res);
}

bool charOrNo(const std::string& input) {
    for (int c = 0; c < input.size(); c++) {
        if (input[c] < '0' || input[c] > '9') {
            return true;
        }
    }
    return false;
}

bool onlyChar(const std::string& input) {
    for (int c = 0; c < input.size(); c++) {
        if ((input[c] < 'a' || input[c] > 'z')
         && (input[c] < 'A' || input[c] > 'Z')) {
            return true;
        }
    }
    return false;
}

void    printContact(Phonebook *fiche, int num)
{
    std::cout << "Contact index : ";
    std::cout << num + 1 << std::endl;
    std::cout << "Contact first name : " + fiche[num].getFistName() << std::endl;
    std::cout << "Contact last name : " + fiche[num].getLastName() << std::endl;
    std::cout << "Contact nickname : " + fiche[num].getNickName() << std::endl;
    std::cout << "Contact darkest secret : " + fiche[num].getDarkestSecret() << std::endl;

}

void add_function(Phonebook *fiche, int j)
{
    std::string input;
    int i = 0;            
    

    std::string str[5];
    str[0] = "Please add a contact name :";
    str[1] = "Please add a lastname :";
    str[2] = "Please add a nick name :";
    str[3] = "Please add a phone number :";
    str[4] = "Please add a darkest secret :";

    while(i < 5){
        std::cout << str[i] << std::endl;
        std::getline(std::cin, input);
        if (i == 0){
            if (onlyChar(input) == false)
                fiche[j].setFirstName(input);
            else{
                std::cout << "ERROR : non alphabetic character" << std::endl;
                i--;
            }
        }
        else if (i == 1){
            if (onlyChar(input) == false)
                fiche[j].setLastName(input);
            else{
                std::cout << "ERROR : non alphabetic character" << std::endl;
                i--;
            }
        }
        else if (i == 2)
            fiche[j].setNickName(input);
        else if (i == 3){
            if (charOrNo(input) == false)
                fiche[j].setPhoneNumber(input);
            else{
            std::cout << "ERROR : non numeric character try again" << std::endl;
                i--;
            }
        }
        else if (i == 4)
            fiche[j].setDarkestSecret(input);
    i++;
    }
    return ;
}

void    printPhonebook(Phonebook *fiche)
{
    int i = 0;
    int index = 1;

    while (i < 8){
        std::cout << "index :         ";
        std::cout << index;
        std::cout << " | first name : " + printFormatFirstName(fiche, i);
        std::cout << " | last name : " +  printFormatLastName(fiche, i);
        std::cout << " | nick name : " +  printFormatNickName(fiche, i) << std::endl;
        i++;
        index++;
    }
    return ;
}

void search_function(Phonebook *fiche)
{
    std::string input;
    
    int i = 0;
    int nbr;
    printPhonebook(fiche);
    std::cout << "please input a contact index for more details :" << std::endl;
    std::getline(std::cin, input);
    if (charOrNo(input) == true){
        std::cout << "ERROR : not a numeric character" << std::endl;
        return ;
    }   
    nbr = std::stoi(input);
    while (i < 8 && nbr != 9){
        if (i == (nbr - 1)){
            printContact(fiche, --nbr);
            return ;
        }
        i++;
    }
}

int main(int ac, char **av){
    
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