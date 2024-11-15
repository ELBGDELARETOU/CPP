#include "Phonebook.class.hpp"

Phonebook::Phonebook(){
    // std::cout << "Constructeur called" << std::endl;
    currentIndex = 0;
    totalContacts = 0;
}

Phonebook::~Phonebook(){
    // std::cout << "Destructor called" << std::endl;
    return;
}

std::string Contact::getFirstName() const{
    return (firstName);
}
std::string  Contact::getLastName() const{
    return (lastName);
}
std::string  Contact::getNickName() const{
    return (nickName);
}
std::string Contact::getPhoneNumber() const{
    return (phoneNumber);
}
std::string  Contact::getDarkestSecret() const{
    return (darkestSecret);
}

void  Contact::setFirstName(std::string str){
    this->firstName = str;
}
void  Contact::setLastName(std::string str){
    this->lastName = str;
}
void  Contact::setNickName(std::string str){
    this->nickName = str;
}
void  Contact::setPhoneNumber(std::string str){
        this->phoneNumber = str;
}
void  Contact::setDarkestSecret(std::string str){
    this->darkestSecret = str;
}


std::string Phonebook::printFormatFirstName(int i) const{
    std::string res = contacts[i].getFirstName();
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

std::string Phonebook::printFormatLastName(int i) const{

    std::string res = contacts[i].getLastName();
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

std::string Phonebook::printFormatNickName(int i) const{
    std::string res = contacts[i].getNickName();
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
    for (unsigned long c = 0; c < input.size(); c++) {
        if (input[c] < '0' || input[c] > '9') {
            return true;
        }
    }
    return false;
}

bool onlyChar(const std::string& input) {
    for (unsigned long c = 0; c < input.size(); c++) {
        if ((input[c] < 'a' || input[c] > 'z')
         && (input[c] < 'A' || input[c] > 'Z')) {
            return true;
        }
    }
    return false;
}

void    Phonebook::printContact(int num) const {
    std::cout << "Contact index : ";
    std::cout << num + 1 << std::endl;
    std::cout << "Contact first name : " + contacts[num].getFirstName() << std::endl;
    std::cout << "Contact last name : " + contacts[num].getLastName() << std::endl;
    std::cout << "Contact phone number : " + contacts[num].getPhoneNumber() << std::endl;
    std::cout << "Contact nickname : " + contacts[num].getNickName() << std::endl;
    std::cout << "Contact darkest secret : " + contacts[num].getDarkestSecret() << std::endl;

}

void Phonebook::addContact()
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
        if (std::cin.eof())
            return;
        if (i == 0){
            if (input.empty()){
                std::cout << "ERROR : empty input" << std::endl;
                i--;
            }
            else if (onlyChar(input) == false)
                contacts[currentIndex].setFirstName(input);
            else{
                std::cout << "ERROR : non alphabetic character" << std::endl;
                i--;
            }
        }
        else if (i == 1){
            if (onlyChar(input) == false)
                contacts[currentIndex].setLastName(input);
            else{
                std::cout << "ERROR : non alphabetic character" << std::endl;
                i--;
            }
        }
        else if (i == 2)
            contacts[currentIndex].setNickName(input);
        else if (i == 3){
            if (input.empty()){
                std::cout << "ERROR : empty input" << std::endl;
                i--;
            }
             if (charOrNo(input) == false)
                contacts[currentIndex].setPhoneNumber(input);
            else{
            std::cout << "ERROR : non numeric character try again" << std::endl;
                i--;
            }
        }
        else if (i == 4)
            contacts[currentIndex].setDarkestSecret(input);
    i++;
    }
    currentIndex = (currentIndex + 1) % 8;
    totalContacts++;
    return ;
}

void    Phonebook::printPhonebook() const {
    int i = 0;
    int index = 1;

    std::cout << "|     index|first name| last name| nick name|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (i < 8){
        std::cout << "|         " << index;
        std::cout << "|" << printFormatFirstName(i);
        std::cout << "|" << printFormatLastName(i);
        std::cout << "|" << printFormatNickName(i) << "|" <<std::endl;
        i++;
        index++;
    }
    return ;
}

void Phonebook::searchContacts() const
{
    std::string input;
    
    int i = 0;
    long nbr;
    printPhonebook();
    std::cout << "please input a contact index for more details :" << std::endl;
    std::getline(std::cin, input);
    if (charOrNo(input) == true){
        std::cout << "ERROR : not a numeric character" << std::endl;
        return ;
    }   
    std::istringstream iss(input);
    iss >> nbr;
    while (i < 8 && nbr != 9){
        if (i == (nbr - 1)){
            printContact(--nbr);
            return ;
        }
        i++;
    }
}
