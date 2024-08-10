/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:07:46 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/16 16:33:12 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    
    _type = "";
}

AMateria::AMateria(std::string const &type) {
    
    std::cout << BLUE "AMateria constuctor called" RESET << std::endl;
    _type = type;
}

AMateria::AMateria(const AMateria &a) {

    std::cout << BLUE "AMateria copy constuctor called" RESET << std::endl;
    *this = a;    
}

AMateria::~AMateria() {
    
    std::cout << RED "AMateria default destructor called" RESET << std::endl;
}

AMateria& AMateria::operator=(const AMateria &a)
{
    std::cout << GREEN "AMateria operator = called" RESET << std::endl;
    _type = a._type;
    return (*this);
}

const std::string& AMateria::getType() const {
    
    return(_type);
}

void AMateria::use(ICharacter& target) {
    
    std::cout << MAGENTA "AMateria" << getType() << "use on" << target.getName() << RESET << std::endl;
}


