/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:13:08 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/23 13:40:14 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib> 
#include <limits.h>
#include <sstream>

class BitcoinExchange
{

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &b);
    BitcoinExchange &operator=(const BitcoinExchange &b);
    int parsingInput(std::ifstream &input);
    int parsingData(std::ifstream &data);
    void customSplit(const std::string &str, char separator, std::string *result, int &count);
    int checkInData(const std::string &date, double value);
    bool checkValidDate(std::string date);
    bool checkValidValue(double value);

    class Badinput : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Check the data.csv"; }
    };
    class Badheader : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Check the header of data.csv"; }
    };


private:
    std::map<std::string, double> _data;
};

#endif