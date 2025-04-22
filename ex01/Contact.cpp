#include "Contact.hpp"

Contact::Contact()
{
    _firstname = "";
    _lastname = "";
    _nickname = "";
    _phone = "";
    _secret = "";
}

Contact::Contact(const str& firstname, const str& lastname, const str& nickname, const str& phone, const str& secret)
{
    _firstname = firstname;
    _lastname = lastname;
    _nickname = nickname;
    _phone = phone;
    _secret = secret;
}

Contact::~Contact()
{
} 
//Setters
void Contact::setFirstName(const str& firstname)
{
    _firstname = firstname;
}

void Contact::setLastName(const str& lastname)
{
    _lastname = lastname;
}

void Contact::setNickname(const str& nickname)
{
    _nickname = nickname;
}

void Contact::setPhone(const str& phone)
{
    _phone = phone;
}

void Contact::setSecret(const str& secret)
{
    _secret = secret;
}
//Getters
const str& Contact::getFirstName()
{
    return(_firstname);
}

const str& Contact::getLastName()
{
    return(_lastname);
}

const str& Contact::getNickname()
{
    return(_nickname);
}

const str& Contact::getPhone()
{  
    return(_phone);
}

const str& Contact::getSecret()
{
    return(_secret);
}

int Contact::fillContact()
{
    std::string input;

    while(1)
    {
        std::cout << "ENTER FIRST NAME:  ";
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << std::endl << "INVALID INPUT" << std::endl;
        else
            break ;
     }
     Contact::setFirstName(input);

     while(1)
     {
        std::cout << "ENTER LAST NAME:   ";
        std::getline(std::cin, input);
        if(input.empty())
            std::cout << std::endl << "INVALID INPUT" << std::endl; 
        else
            break ;
     }
     Contact::setLastName(input);

     while(1)
     {
        std::cout << "ENTER NICKNAME:   ";
        std::getline(std::cin, input);
        if(input.empty())
            std::cout << std::endl << "INVALID INPUT" << std::endl; 
        else
            break ;
     }
     Contact::setNickname(input);

     while(1)
     {
        std::cout << "ENTER PHONE NUMBER:   ";
        std::getline(std::cin, input);
        if(input.empty())
            std::cout << std::endl << "INVALID INPUT" << std::endl; 
        else
            break ;
     }
     Contact::setPhone(input);

     while(1)
     {
        std::cout << "ENTER DARKEST SECRET:   ";
        std::getline(std::cin, input);
        if(input.empty())
            std::cout << std::endl << "INVALID INPUT" << std::endl; 
        else
            break ;
     }
     Contact::setSecret(input);

     std::cout << std::endl << " **CONTACT ADDED TO THE PHONEBOOK**" << std::endl << std::endl;

     return(0);
}