/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:00:50 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/19 13:20:47 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {

    std::cout << GREEN "Default constructor called" RESET << std::endl;
    _value = 0;    
}

Fixed::Fixed(const Fixed &f) {

    std::cout << GREEN "Copy assignment operator called" RESET << std::endl;
    _value = f._value;
}

Fixed::Fixed(const int nb) {
    
    _value = nb << _virgule;
    std::cout << GREEN "Int constructor called" RESET << std::endl;
}

Fixed::Fixed(const float nb) {
    
    _value = roundf(nb * (1 << _virgule));
    std::cout << GREEN "Float constructor called" RESET << std::endl;
}

Fixed::~Fixed() {

    std::cout << RED "Default destructor called" RESET << std::endl;   
}

            /* operator */

Fixed& Fixed::operator=(const Fixed &f) {

    if (this != &f)
        _value = f.getRawBits();
    return (*this);
}

bool Fixed::operator<(const Fixed &f) {
    
    return _value<f.getRawBits();
}

bool Fixed::operator>(const Fixed &f) {
    
    return _value>f.getRawBits();
}

bool Fixed::operator<=(const Fixed &f) {
    
    return _value<=f.getRawBits();
}

bool Fixed::operator>=(const Fixed &f) {
    
    return _value>=f.getRawBits();
}

bool Fixed::operator!=(const Fixed &f) {
    
    return _value!=f.getRawBits();
}

bool Fixed::operator==(const Fixed &f) {
    
    return _value==f.getRawBits();
}

Fixed Fixed::operator+(const Fixed &f) {
    
    return toFloat()+f.toFloat();
}

Fixed Fixed::operator-(const Fixed &f) {
    
    return toFloat()-f.toFloat();
}

Fixed Fixed::operator/(const Fixed &f) {
    
    return toFloat()/f.toFloat();
}

Fixed Fixed::operator*(const Fixed &f) {
    
    return toFloat()*f.toFloat();
}

Fixed Fixed::operator--(void) {
    
    _value--;
    return *this;
}

Fixed Fixed::operator++(void) {
    
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    
    Fixed tmp(*this);
    _value++;
    return tmp;
}

Fixed Fixed::operator--(int) {
    
    Fixed tmp(*this);
    _value--;
    return tmp;
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {

    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {

    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {

    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

std::ostream& operator<<(std::ostream & o, const Fixed &f) {
    
    o << f.toFloat();
    return o;
}

int Fixed::toInt (void) const {

    return getRawBits() >> _virgule;
}

float   Fixed::toFloat( void ) const {
    
    return static_cast<float>( getRawBits() ) / ( 1 << _virgule );
}

int Fixed::getRawBits( void ) const {

    std::cout << CYAN "getRawBits member function called" RESET << std::endl;
    return(_value);
}

void Fixed::setRawBits( int const raw ) {

    _value = raw;
}