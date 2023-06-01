#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

std::string Contact::_getInput(std::string str){
    std::string input = "";
    bool        valid = false;
    do {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid, retry " << std::endl;
        }
    } while (!valid);
    return (input);
}

void    Contact::setIndex(int i){
    this->_index = i;
}

void    Contact::init(){
    std::cin.ignore();
    this->_firstName = _getInput("First name: ");
    this->_lastName = _getInput("Last name: ");
    this->_nickname = _getInput("Nickname: ");
    this->_phoneNumber = _getInput("Phone number: ");
    this->_darkestSecret = _getInput("Darkest secret: ");
    std::cout << std::endl;
}

std::string Contact::_printLen(std::string str){
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::view(int i){
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << i << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void    Contact::display(int index){
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << std::endl;
}
