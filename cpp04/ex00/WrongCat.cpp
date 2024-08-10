/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:20:12 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 15:14:13 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    
    std::cout << BLUE "WrongCat default constuctor called" RESET << std::endl;
    _type = "WrongCat";
}

WrongCat::~WrongCat() {
    
    std::cout << RED "WrongCat default destructor called" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &a) {

    std::cout << BLUE "WrongCat copy constuctor called" RESET << std::endl;
    *this = a;    
}

WrongCat& WrongCat::operator=(const WrongCat &c) {
    
    std::cout << GREEN "operator = called" RESET << std::endl;
    _type = c._type;
    return (*this);
}

void WrongCat::makeSound() const {

    std::cout << "jsp Wrongcat" << std::endl;
}