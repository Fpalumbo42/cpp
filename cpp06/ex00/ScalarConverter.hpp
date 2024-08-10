/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:06:29 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/19 14:48:34 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>

class ScalarConverter {

public :
    
    static void convert(const std::string& toconvert);
private :

    ScalarConverter();
    virtual ~ScalarConverter();
    static std::string getchar(const std::string &toconvert);
};

#endif