/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:40:46 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:52:44 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    
    std::cout << BLUE "Dog default constuctor called" RESET << std::endl;
    _brain = new Brain();
    _type = "Dog";
}

Dog::~Dog() {
    
    std::cout << RED "Dog default destructor called" RESET << std::endl;
    delete _brain;
}

Dog::Dog(const Dog &d) {

    std::cout << BLUE "Dog copy constuctor called" RESET << std::endl;
    *this = d;    
}

Dog& Dog::operator=(const Dog &c) {
    
    std::cout << GREEN "Dog operator = called" RESET << std::endl;
    _type = c._type;
    return (*this);
}

void Dog::makeSound() const{

    std::cout << "wouf." << std::endl;
}