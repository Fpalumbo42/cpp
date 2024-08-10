/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:00:50 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/19 13:22:13 by fpalumbo         ###   ########.fr       */
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

Fixed::Fixed(const int nb) {
    
    _value = nb << _virgule;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) {
    
    _value = roundf(nb * (1 << _virgule));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {

    std::cout << "Default destructor called" << std::endl;   
}

Fixed& Fixed::operator=(const Fixed &f) {

    if (this != &f)
        _value = f.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream & o, const Fixed &f) {
    
    o << f.toFloat();
    return o;
}


int Fixed::toInt (void) const {

    return ( getRawBits() >> _virgule);
}

float   Fixed::toFloat( void ) const {
    
    return static_cast<float>( getRawBits() ) / ( 1 << _virgule );
}

int Fixed::getRawBits( void ) const {

    std::cout << "getRawBits member function called" << std::endl;
    return(_value);
}

void Fixed::setRawBits( int const raw ) {

    _value = raw;
}