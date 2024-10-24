#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
#include <iostream>
#include <cstring>
#include <sstream>

class Phonebook{

public:

std::string getFistName();
std::string getLastName();
std::string getNickName();
std::string getPhoneNumber();
std::string getDarkestSecret();
void setFirstName(std::string str);
void setLastName(std::string str);
void setNickName(std::string str);
void setPhoneNumber(std::string str);
void setDarkestSecret(std::string str);
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