/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:20:12 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:07:45 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

    std::cout << BLUE "Cat default constuctor called" RESET << std::endl;
    _brain = new Brain();
    _type = "Cat";
}

Cat::~Cat() {
    
    std::cout << RED "Cat default destructor called" RESET << std::endl;
    delete _brain;
}

Cat::Cat(const Cat &a) {

    std::cout << BLUE "Cat copy constuctor called" RESET << std::endl;
    *this = a;
}

Cat& Cat::operator=(const Cat &c) {
    
    std::cout << GREEN "Cat operator = called" RESET << std::endl;
    _type = c._type;
    _brain = new Brain( *c._brain );
    return (*this);
}

void Cat::makeSound() const{

    std::cout << "MIAOUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}