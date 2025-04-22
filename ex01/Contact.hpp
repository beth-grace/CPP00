#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Contact {
    private :
        str _firstname;
        str _lastname;
        str _nickname;
        str _phone;
        str _secret;

    public :
        Contact();
        Contact(const str& firstname, const str& lastname, const str& nickname, const str& phone, const str& secret);
        ~Contact();
        
        void    setFirstName(const str& firstname);
        void    setLastName(const str& lastname);
        void    setNickname(const str& nickname);
        void    setPhone(const str& phone);
        void    setSecret(const str& secret);

        const str& getFirstName();
        const str& getLastName();
        const str& getNickname();
        const str& getPhone();
        const str& getSecret();

        int fillContact();
};

#endif