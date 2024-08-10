/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:13:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/16 14:24:22 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{

    int countOperator = 0;
    int countNumber = 0;

    if (argc != 2)
    {
        std::cout << "Usage: ./RPN \"a b c + *\"" << std::endl;
        return 1;
    }

    std::string arg = argv[1];
    RPN oui;

    for (std::size_t i = 0; i < arg.length(); ++i)
    {
        if (std::isdigit(arg[i]) && (arg[i + 1] == ' ' || arg[i + 1] == '\0'))
            countNumber++;
        else if ((arg[i] == '+' || arg[i] == '-' || arg[i] == '/' || arg[i] == '*') && (arg[i + 1] == ' ' || arg[i + 1] == '\0'))
            countOperator++;
        else if (arg[i] == ' ')
            continue;
        else
        {
            std::cout << "Error: Unknown character" << std::endl;
            return 1;
        }
    }

    if (countOperator != countNumber - 1 || countNumber <= 1)
    {
        std::cout << "Error: Syntax is not correct" << std::endl;
        return 1;
    }

    try
    {
        std::cout << oui.calcul(arg) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}