#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits> 

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"


class PhoneBook {

    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact(void);
        void hello(void) const;
        void search_contact(void);
    private:
        int check_choose(std::string choose);
        Contact _contacts[8];
        int number_contacts;
        int number_contacts2;
};

#endif