/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:13:05 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/16 12:02:52 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
    
    std::cout << BLUE "Ice default constuctor called" RESET << std::endl;
    _type = "ice";
}

Ice::Ice(const Ice &a) {

    std::cout << BLUE "Ice copy constuctor called" RESET << std::endl;
    *this = a;
}

Ice::~Ice() {
    
    std::cout << RED "Ice default destructor called" RESET << std::endl;
}

Ice& Ice::operator=(const Ice &c) {
    
    std::cout << GREEN "Ice operator = called" RESET << std::endl;
    _type = c._type;
    return *this;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
    
    std::cout << "*I shoots an ice bolt at " << target.getName() << " *" << std::endl;
}