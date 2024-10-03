#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
#include <iostream>
#include <cstring>
#include <sstream>

class Phonebook{

public:

std::string getFistName(){
    return (firstName);
}
std::string getLastName(){
    return (lastName);
}
std::string getNickName(){
    return (nickName);
}
std::string getPhoneNumber(){
    return (phoneNumber);
}
std::string getDarkestSecret(){
    return (darkestSecret);
}

void setFirstName(std::string str){
    this->firstName = str;
}
void setLastName(std::string str){
    this->lastName = str;
}
void setNickName(std::string str){
    this->nickName = str;
}
void setPhoneNumber(std::string str){
        this->phoneNumber = str;
}
void setDarkestSecret(std::string str){
    this->darkestSecret = str;
}

Phonebook(void);
~Phonebook(void);

private:

    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
};

void search_function(Phonebook *fiche);
void add_function(Phonebook *fiche, int j);


#endif