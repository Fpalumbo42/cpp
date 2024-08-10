/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:26:57 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/18 12:10:44 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

    public :
    Fixed();
    Fixed(const Fixed &f);
    ~Fixed();
    Fixed& operator=(const Fixed &f);
    int getRawBits( void ) const;
    void setRawBits(const int  raw );

    private :
    int _value;
    const int static _virgule = 8;
};

#endif