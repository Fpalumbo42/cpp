/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:13:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/11 14:04:56 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./btc input.txt" << std::endl;
        return 1;
    }
    std::ifstream input(argv[1]);
    if (!input.is_open())
    {
        std::cout << "Error: input not found" << std::endl;
        return 1;
    }
    std::ifstream data("data.csv");
    if (!data.is_open())
    {
        std::cout << "Error: data not found" << std::endl;
        return 1;
    }

    BitcoinExchange ok;
    try
    {
        ok.parsingData(data);
        ok.parsingInput(input);
    }
    catch (const std::exception &e)
    {
         std::cout << e.what() << std::endl;
    }
    
}