/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:26:57 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/19 13:21:18 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Fixed {

    public :
    Fixed();
    Fixed(const Fixed &f);
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed();

    Fixed& operator=(const Fixed &f);
    Fixed operator+(const Fixed &f);
    Fixed operator-(const Fixed &f);
    Fixed operator*(const Fixed &f);
    Fixed operator/(const Fixed &f);

    Fixed operator++(int nb);
    Fixed operator++(void);
    Fixed operator--(int nb);
    Fixed operator--(void);
    
    bool operator<(const Fixed &f);
    bool operator>(const Fixed &f);
    bool operator!=(const Fixed &f);
    bool operator<=(const Fixed &f);
    bool operator>=(const Fixed &f);
    bool operator==(const Fixed &f);
    
    int getRawBits( void ) const;
    void setRawBits(const  int raw );

    int toInt() const;
    float toFloat( void ) const;
    
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min( const Fixed &a, const Fixed &b );

    private :
    int _value;
    const int static _virgule = 8;
};

std::ostream& operator<<(std::ostream & o, const Fixed &f);

#endif