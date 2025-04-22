#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    _num_entries = 0;
    _iter_entries = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::addContact()
{
    _contact[_iter_entries].fillContact();
    _iter_entries++;
    if( _iter_entries >= 8)
        _iter_entries = 0;
    if (_num_entries < 8)
        _num_entries++; 
}

void Phonebook::listPhonebook()
{
    std::cout << std::endl << "*********************************************" << std::endl;
    std::cout << "|   INDEX  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
    std::cout << "*********************************************" << std::endl;

    if(_num_entries  < 1)
        std::cout << std::endl << " ** ERROR: NO CONTACTS ** " << std::endl;
 
    for(int i = 0; i < _max_contacts; ++i)
    {
        std::cout << "|";
        std::cout << std::right << std::setw(10) << i << "|";
        if (_contact[i].getFirstName().length() <= 10)
            std::cout << std::right << std::setw(10) << _contact[i].getFirstName() << "|";
        else if (_contact[i].getFirstName().length() > 10)
            std::cout << _contact[i].getFirstName().substr(0,9) << ".|";

        if (_contact[i].getLastName().length() <= 10)
            std::cout << std::right << std::setw(10) << _contact[i].getLastName() << "|";
        else if (_contact[i].getLastName().length() > 10)
            std::cout << _contact[i].getLastName().substr(0,9) << ".|";
        
        if (_contact[i].getNickname().length() <= 10)
            std::cout << std::right << std::setw(10) << _contact[i].getNickname() << "|";
        else if (_contact[i].getNickname().length() > 10)
            std::cout << _contact[i].getNickname().substr(0,9) << ".|";

        std::cout << std::endl;
    }
    std::cout << "*********************************************" << std::endl;
}

void    Phonebook::searchContact()
{
    std::string input;

    if (_num_entries < 1)
        return;

    std::cout << "ENTER INDEX NUMBER:  ";
    std::getline(std::cin, input);
    if (input.empty() || input < "0" || input > "7" || atoi(input.c_str()) >= _num_entries)
    {
        std::cout << "INVALID INPUT." << std::endl;
        return ;
    }
    std::cout << std::endl << "**  CONTACT INFORMATION FOR INDEX:  " << input << "  **"<< std::endl;
    std::cout << "FIRST NAME:     " << _contact[atoi(input.c_str())].getFirstName() << std::endl;
    std::cout << "LAST NAME:      " << _contact[atoi(input.c_str())].getLastName() << std::endl;
    std::cout << "NICKNAME:       " << _contact[atoi(input.c_str())].getNickname() << std::endl;
    std::cout << "PHONE NUMBER:   " << _contact[atoi(input.c_str())].getPhone() << std::endl;
    std::cout << "DARKEST SECRET: " << _contact[atoi(input.c_str())].getSecret() << std::endl << std::endl;
}
