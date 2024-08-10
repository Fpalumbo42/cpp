#include "Contact.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

void Contact::new_contact(int r, std::string str) {

	if (r == 0)
		first_name = str;
	if (r == 1)
		last_name = str;
	if (r == 2)
		nickname = str;
	if (r == 3)
		phone_num = str;
	if (r == 4)
		secret = str;
}

void Contact::print_col(int r) {

    if (r == 0) 
	{
        if (first_name.size() > 9)
		{
            std::cout << first_name.substr(0, 9) << "."; //prend une partie de la str
			std::cout << "|";
		}
        else
		{
            std::cout << std::setw(10) << first_name;
			std::cout << "|";
		}
    }
    if (r == 1) 
	{
        if (last_name.size() > 9)
		{
            std::cout << last_name.substr(0, 9) << ".";
			std::cout << "|";
		}
        else
		{
            std::cout << std::setw(10) << last_name;
			std::cout << "|";
		}
    }
    if (r == 2) 
	{
        if (nickname.size() > 9)
		{
            std::cout << nickname.substr(0, 9) << ".";
			std::cout << "|" << std::endl;
		}
        else
		{
            std::cout << std::setw(10) << nickname;
			std::cout << "|" << std::endl;
		}
    }
}

void Contact::print_contact() const {

	std::cout << CYAN "First name: " RESET <<  first_name << std::endl;
	std::cout << CYAN "Last name: " RESET <<  last_name << std::endl;
	std::cout << CYAN "Nickname: " RESET << nickname << std::endl;
	std::cout << CYAN "Phone number: " RESET << phone_num << std::endl;
	std::cout << CYAN "Darkest Secret: " RESET << secret << std::endl;
}