/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:27:48 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:07:59 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {

    std::cout << BLUE "Animal default constuctor called" RESET << std::endl;
    _type = "default";
}

Animal::Animal(std::string type) {
    
    std::cout << BLUE "Animal constuctor with type called" RESET << std::endl;
    _type = type;
}

Animal::Animal(const Animal &a) {

    std::cout << BLUE "Animal copy constuctor called" RESET << std::endl;
    *this = a;    
}

Animal::~Animal() {
    
    std::cout << RED "Animal default destructor called" RESET << std::endl;
}

Animal& Animal::operator=(const Animal &a) {
    
    std::cout << GREEN "Animal operator = called" RESET << std::endl;
    _type = a._type;
    return (*this);
}

std::string Animal::getType( void ) const
{
    return this->_type;
}

void Animal::makeSound()const {

    std::cout << "jsp" << std::endl;
}