/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:16:51 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/23 16:36:33 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &b)
{
    _data = b._data;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &b)
{
    if (this != &b)
    {
        _data = b._data;
    }
    return *this;
}

bool BitcoinExchange::checkValidValue(double value)
{
    if (value > INT_MAX || value < 0)
        return false;
    else
        return true;
}
bool BitcoinExchange::checkValidDate(std::string date)
{
    int count = 0;
    int i = 0;
    int year = 0;
    int month = 0;
    int day = 0;

    while (date[i])
    {
        if (date[i] == '-')
            count++;
        i++;
    }
    if (count != 2)
        return false;

    std::string parts[3];
    count = 0;
    customSplit(date, '-', parts, count);

    for (size_t i = 0; i < parts[0].size(); ++i)
    {
        if (!std::isdigit(parts[0][i]))
            return false;
    }
    for (size_t i = 0; i < parts[1].size(); ++i)
    {
        if (!std::isdigit(parts[1][i]))
            return false;
    }
    for (size_t i = 0; i < parts[2].size(); ++i)
    {
        if (!std::isdigit(parts[2][i]))
            return false;
    }
    
    year = atoi(parts[0].c_str());
    if (!(year >= 2009 && year <= 2024))
        return false;

    month = atoi(parts[1].c_str());
    if (!(month >= 1 && month <= 12))
        return false;

    day = atoi(parts[2].c_str());
    if (!(day >= 1 && day <= 31))
        return false;

    return true;
}
void BitcoinExchange::customSplit(const std::string &str, char separator, std::string *result, int &count)
{
    std::string::size_type startIndex = 0;
    std::string::size_type endIndex = 0;
    count = 0;

    for (std::string::size_type i = 0; i <= str.size(); i++)
    {
        if (str[i] == separator || i == str.size())
        {
            endIndex = i;
            std::string temp;
            temp.append(str, startIndex, endIndex - startIndex);
            result[count++] = temp;
            startIndex = endIndex + 1;
        }
    }
}
int BitcoinExchange::parsingData(std::ifstream &data)
{
    std::string line;
    std::string parts[2];
    int i = 0;
    int count = 0;
    bool firstline = true;

    while (getline(data, line))
    {
        i = 0;
        count = 0;
        if (firstline)
        {
            firstline = false;
            if (line != "date,exchange_rate")
            {
                throw BitcoinExchange::Badheader();
            }
            continue;
        }

        while (line[i])
        {
            if (line[i] == ',')
                count++;
            i++;
        }
        
        if (count != 1)
        {
            std::cout << line << " ==> ";
            throw(BitcoinExchange::Badinput());
        }
        count = 0;

        customSplit(line, ',', parts, count);

        if (!checkValidDate(parts[0]))
        {
            std::cout << line << " ==> ";
            throw(BitcoinExchange::Badinput());
        }

        
        if (count == 2 && !firstline)
        {
            std::string date = parts[0];
            std::string valueStr = parts[1];

            std::istringstream iss(valueStr);
            double value;
            iss >> value;

            if (iss.fail() || !iss.eof())
                throw(BitcoinExchange::Badinput());

        if (!checkValidValue(value))
        {
            std::cout << line << " ==> ";
            throw(BitcoinExchange::Badinput());
        }
            _data[date] = value;
        }
        else
        {
            throw(BitcoinExchange::Badinput());
        }
    }

    return 0;
}

int BitcoinExchange::parsingInput(std::ifstream &input)
{
    std::string line;
    std::string parts[2];
    int count;
    bool firstline = true;

    while (getline(input, line))
    {
        if (firstline)
        {
            firstline = false;
            if (line != "date | value")
            {
                std::cout << "Error : Check the header of input.txt ==> " << line << std::endl;
            }
            continue;
        }
        customSplit(line, '|', parts, count);
        if (count == 2 && !firstline)
        {
            std::string date = parts[0];
            std::string valueStr = parts[1];

            date.erase(0, date.find_first_not_of(" \t"));
            date.erase(date.find_last_not_of(" \t") + 1);
            valueStr.erase(0, valueStr.find_first_not_of(" \t"));
            valueStr.erase(valueStr.find_last_not_of(" \t") + 1);

            std::istringstream iss(valueStr);
            double value;
            iss >> value;

            if (iss.fail() || !iss.eof() || value > 1000)
                std::cout << "Error: Invalid value '" << valueStr << "' for date '" << date << "'" << std::endl;
            else if (checkValidDate(date))
                checkInData(date, value);
            else
            std::cout << "Error: Invalid format for date '" << date << "'" << std::endl;
        }
        else
        {
            std::cerr << "Error: Invalid line format: " << line << std::endl;
        }
    }
    return 0;
}

int BitcoinExchange::checkInData(const std::string &date, double value)
{
    std::map<std::string, double>::iterator it = _data.find(date);

    if (it == _data.end())
    {
        it = _data.lower_bound(date);
        if (it == _data.begin())
        {
            std::cout << "Error: No available date for '" << date << "'" << std::endl;
            return 1;
        }
        if (it == _data.end() || it->first != date)
        {
            --it;
        }
    }

    double result = it->second * value;
    if (result < 0)
        std::cout << "Error: not a positive number" << std::endl;
    else if (result > INT_MAX)
        std::cout << "Error: too large a number" << std::endl;
    else
        std::cout << date << " => " << value << " * " << it->second << " = " << result << std::endl;

    return 0;
}
