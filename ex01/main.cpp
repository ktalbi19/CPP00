#include "Phonebook.hpp"

int main(void){
    PhoneBook   book;
    std::string input = "";
    std::cout << "Welcome. ADD, SEARCH, EXIT" << std::endl;
    while (input.compare("EXIT")){
        if (input.compare("ADD") == 0){
            book.addContact();}
        else if (input.compare("SEARCH") == 0){
            book.printContacts();
            book.search();
        }
        std::cout << "> " << std::flush;
        std::cin >> input;
    }
    return (0);
}
