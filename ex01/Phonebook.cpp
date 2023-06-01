#include "Phonebook.hpp"

PhoneBook::PhoneBook(){

}

PhoneBook::~PhoneBook(){

}

void    PhoneBook::addContact(void){
    static int  i = 0;
    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}

void    PhoneBook::printContacts(void){
    std::cout << "CONTACT LIST" << std::endl;
    for (int i = 0; i < 8; i++)
        this->_contacts[i].view(i);
    std::cout << std::endl;
}

int     PhoneBook::_readInput(){
    int     input = -1;
    bool    valid = false;
    do
    {
        std::cout << "Please enter the contact index: " << std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 0 && input <= 8))
            valid = true;
        else {
            //something went wrong, we reset the buffer's state to good
            std::cin.clear();
            //and empty it
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
    } while (!valid);
    return (input);
}

void    PhoneBook::search(void){
    int i = this->_readInput();
    this->_contacts[i].display(i);
}
