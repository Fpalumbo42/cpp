/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:33:25 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/03/28 14:33:02 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	
}

PhoneBook::~PhoneBook() {
	
}

void    PhoneBook::hello(void) const {
	
	std::cout << "+------------------------------------+" << std::endl;
	std::cout << "|                                    |" << std::endl;
	std::cout << "|"MAGENTA "      Welcome to my Phonebook " RESET "      |" << std::endl;
	std::cout << "|                                    |" << std::endl;
	std::cout << "| Use " CYAN "ADD" RESET " : for add a contact        |" << std::endl;
	std::cout << "| Use " CYAN "SEARCH" RESET " : for search a contact  |" << std::endl;
	std::cout << "| Use " CYAN "EXIT" RESET " : for quit the Phonebook  |" << std::endl;
	std::cout << "|                                    |" << std::endl;
	std::cout << "+------------------------------------+" << std::endl << std::endl;
	std::cout << " -> "; 
}

void PhoneBook::add_contact() {

	std::string tmp;
	
		std::cout << CYAN "Please enter the following information: " RESET << std::endl << std::endl;
		while (1)
		{
		std::cout << "First name: " << std::endl;
		std::getline(std::cin, tmp);
			if(tmp.empty()) 
			{
				std::cout  << CYAN "First name cannot be empty. Please try again." RESET << std::endl;
				continue;
			}
		_contacts[number_contacts].new_contact(0, tmp);
		std::cout << "Last name: " << std::endl;
		std::getline(std::cin, tmp);
			if(tmp.empty()) 
			{
				std::cout << CYAN "Last name cannot be empty. Please try again." RESET << std::endl;
				continue;
			}
		_contacts[number_contacts].new_contact(1, tmp);
		std::cout << "Nickname: " << std::endl;
		std::getline(std::cin, tmp);
			if(tmp.empty()) 
			{
				std::cout << CYAN "Nickname cannot be empty. Please try again." RESET << std::endl;
				continue;
			}
		_contacts[number_contacts].new_contact(2, tmp);
		std::cout << "Phone number: " << std::endl;
		std::getline(std::cin, tmp);
			if(tmp.empty()) 
			{
				std::cout << CYAN "Phone number cannot be empty. Please try again." RESET << std::endl;
				continue;
			}
		_contacts[number_contacts].new_contact(3, tmp);
		std::cout << "Darkest Secret: " << std::endl;
		std::getline(std::cin, tmp);
			if(tmp.empty()) 
			{
				std::cout << CYAN "Darkest Secret cannot be empty. Please try again." RESET << std::endl;
				continue;
			}
		_contacts[number_contacts].new_contact(4, tmp);
		break;
		}
	if (number_contacts == 7)
		number_contacts = 0;
	else
		number_contacts++;
	if (number_contacts2 < 8)
		number_contacts2++;
}


void PhoneBook::search_contact() {

	int i = 0;
	std::string choose;

	if (number_contacts2 == 0)
		{
			std::cout << CYAN "No contact found" RESET << std::endl;
			return;
		}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i != number_contacts2) 
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1; // setw pour aligner les colonnes
		std::cout << "|";
		_contacts[i].print_col(0);
		_contacts[i].print_col(1);
		_contacts[i].print_col(2);
		i++;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (check_choose(choose) == 1)
		getline(std::cin, choose);
}

int PhoneBook::check_choose(std::string choose) {

	int i;
	if (choose.size() != 1)
	{
		std::cout << std::endl <<  CYAN "Select an valid index: " RESET << std::endl;
		return (1);
	}
	if (choose[0] >= '1' && choose[0] <= number_contacts2 + '0')
	{
		i = (choose[0] - '0') - 1; 
		_contacts[i].print_contact();
		return (0);
	}
	else
	{
		std::cout << std::endl <<  CYAN "Select an valid index: " RESET << std::endl;
		return (1);
	}
}

