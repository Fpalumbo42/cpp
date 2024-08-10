/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nCure.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:19:37 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/15 12:19:56 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
    
    std::cout << BLUE "Cure default constuctor called" RESET << std::endl;
    _type = "Cure";
}

Cure::Cure(const Cure &a) {

    std::cout << BLUE "Cure copy constuctor called" RESET << std::endl;
    *this = a;
}

Cure::~Cure() {
    
    std::cout << RED "Cure default destructor called" RESET << std::endl;
}

Cure& Cure::operator=(const Cure &c) {
    
    std::cout << GREEN "Cure operator = called" RESET << std::endl;
    _type = c._type;
    return *this;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
    
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}