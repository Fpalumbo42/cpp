/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:00:50 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/18 13:25:01 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {

    std::cout << "Default constructor called" << std::endl;
    _value = 0;    
}

Fixed::Fixed(const Fixed &f) {

    std::cout << "Copy assignment operator called" << std::endl;
    _value = f._value;
}

Fixed::~Fixed() {

    std::cout << "Default destructor called" << std::endl;   
}

Fixed& Fixed::operator=(const Fixed &f) {

    if (this != &f)
        _value = f.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;
    return(_value);
}

void Fixed::setRawBits( int const raw ) {

    _value = raw;
}