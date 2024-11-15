#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
#include <iostream>
#include <cstring>
#include <sstream>

class Contact {
public:
    Contact() {}
    ~Contact() {}

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    void setFirstName(const std::string str);
    void setLastName(const std::string str);
    void setNickName(const std::string str);
    void setPhoneNumber(const std::string str);
    void setDarkestSecret(const std::string str);

private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
};

class Phonebook {
public:
    Phonebook();
    ~Phonebook();

    void addContact();
    void searchContacts() const;
    void printPhonebook() const;
    
    std::string printFormatLastName(int i) const;
    std::string printFormatFirstName(int i) const;
    std::string printFormatNickName(int i) const;
    void printContact(int index) const;
    void printAllContacts() const;
    std::string formatOutput(const std::string& str) const;
    bool isNumeric(const std::string& input) const;
    bool onlyAlphabetic(const std::string& input) const;
    
private:
    Contact contacts[8];
    int currentIndex;
    int totalContacts;
};

#endif