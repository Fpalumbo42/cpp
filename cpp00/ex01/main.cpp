/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:09:03 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/03/27 10:17:04 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "stdio.h"


// getline : Lecture de toute la ligne d'entrée, prend en compte les espaces
int main(void) {

    PhoneBook book;
    std::string arg;

    book.hello();
    std::getline(std::cin, arg);
    while (arg.compare("EXIT") != 0)
	{
        if (arg.compare("ADD") == 0)
            book.add_contact();
        else if (arg.compare("SEARCH") == 0)
            book.search_contact();
        std::cout << " -> ";
        std::getline(std::cin, arg);
    }
    return (0);
}
