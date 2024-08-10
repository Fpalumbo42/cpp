/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:26:57 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/19 13:22:30 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    public :
    Fixed();
    Fixed(const Fixed &f);
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed();
    Fixed& operator=(const Fixed &f);
    
    int getRawBits( void ) const;
    void setRawBits(const  int raw );

    int toInt() const;
    float toFloat( void ) const;

    private :
    int _value;
    const int static _virgule = 8;
};

std::ostream& operator<<(std::ostream & o, const Fixed &f);

#endif