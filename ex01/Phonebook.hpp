#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#pragma once

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"
#include <string>
#include <iomanip>

class Phonebook {
    private:
        static const int _max_contacts = 8;
        int _num_entries;
        int _iter_entries;
        Contact _contact[_max_contacts];
    public: 
    Phonebook();
    ~Phonebook();

    void addContact();
    void searchContact();
    void listPhonebook();

};

#endif