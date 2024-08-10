#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Contact {

	public:
		Contact();
		~Contact();
		void new_contact(int r, std::string str);
		void print_col(int r);
		void print_contact() const;
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string secret;
};

#endif