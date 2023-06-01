#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contacts[8];
    int     _readInput(void);

public:
    PhoneBook();
    ~PhoneBook();
    void    addContact(void);
    void    printContacts(void);
    void    search(void);
};

#endif
