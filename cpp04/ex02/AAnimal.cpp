/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:27:48 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:46:36 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {

    std::cout << BLUE "AAnimal default constuctor called" RESET << std::endl;
    _type = "default";
}

AAnimal::AAnimal(std::string type) {
    
    std::cout << BLUE "AAnimal constuctor with type called" RESET << std::endl;
    _type = type;
}

AAnimal::AAnimal(const AAnimal &a) {

    std::cout << BLUE "AAnimal copy constuctor called" RESET << std::endl;
    *this = a;    
}

AAnimal::~AAnimal() {
    
    std::cout << RED "AAnimal default destructor called" RESET << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &a) {
    
    std::cout << GREEN "AAnimal operator = called" RESET << std::endl;
    _type = a._type;
    return (*this);
}

std::string AAnimal::getType( void ) const
{
    return this->_type;
}
