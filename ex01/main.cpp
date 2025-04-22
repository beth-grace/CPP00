#include "Phonebook.hpp"

int main(void)
{
    Phonebook   phonebook;
    std::string input;


    while (1)
    {
        std::cout << std::endl << "YOU ARE IN THE PHONE BOOK. ACTIONS: ADD/SEARCH/EXIT" << std::endl << "ENTER AN ACTION:  ";
        std::getline(std::cin, input);
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
        {
            phonebook.listPhonebook();
            phonebook.searchContact();
        }
        else if (input == "EXIT")
            break;
        else if (input.empty() || input != "ADD" || input != "SEARCH" || input != "EXIT")
            std::cout << std::endl << "INVALID INPUT, TRY AGAIN.";
    }

    return (0);
}