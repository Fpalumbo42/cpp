/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:24:18 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 15:02:10 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

    std::cout << BLUE "WrongAnimal default constuctor called" RESET << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) {
    
    std::cout << BLUE "WrongAnimal constuctor with type called" RESET << std::endl;
    _type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {

    std::cout << BLUE "WrongAnimal copy constuctor called" RESET << std::endl;
    *this = a;    
}

WrongAnimal::~WrongAnimal() {
    
    std::cout << RED "WrongAnimal default destructor called" RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a) {
    
    std::cout << GREEN "operator = called" RESET << std::endl;
    _type = a._type;
    return (*this);
}

std::string WrongAnimal::getType( void ) const
{
    return this->_type;
}

void WrongAnimal::makeSound()const {

    std::cout << "jsp WrongAnimal" << std::endl;
}