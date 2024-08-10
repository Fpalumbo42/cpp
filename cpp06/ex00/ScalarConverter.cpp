/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:15:12 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/25 15:19:21 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(const std::string &toconvert)
{
    std::string result = ScalarConverter::getchar(toconvert);
    std::cout << "Char : " << result << std::endl;
}

std::string ScalarConverter::getchar(const std::string &toconvert)
{
    int tmp;
    char letter;
    std::string str;

    tmp = atoi(toconvert.c_str());
    if (tmp >= 0 && tmp <= 127)
    {
        letter = static_cast<char>(tmp);
        str = letter;
        return str;
    }
    else
    {
        return "Impossible";
    }
}