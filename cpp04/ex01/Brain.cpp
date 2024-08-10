/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:54:05 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:37:51 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    
    std::cout << BLUE "Brain default constuctor called" RESET << std::endl;
}

Brain::~Brain() {
    
    std::cout << RED "Brain default destructor called" RESET << std::endl;
}

Brain::Brain( const Brain& b)
{
    *this = b;
}
Brain& Brain::operator=(const Brain& b) {
    
    std::cout << GREEN "Brain operator = called" RESET << std::endl;
    int i = 0;
    while (i != 100)
    {
        ideas[i] = b.ideas[i];
        i++;
    }
    return (*this);
}