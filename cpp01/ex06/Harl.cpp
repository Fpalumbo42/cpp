/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:16:24 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:02:07 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {

    _tab_level[0] = "DEBUG";
    _tab_level[1] = "INFO";
    _tab_level[2] = "WARNING";
    _tab_level[3] = "ERROR";
}

Harl::~Harl() {
    
}

void Harl::_debug() {
    
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::_info() {

     std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;   
}

void Harl::_error() {
    
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::_warning() {
    
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::complain( std::string level ) {
    
    int i = 0;

    while (level.compare(_tab_level[i]) != 0 && i < 4)
    {
        i++;
    }
    switch (i)
    {
    case 0:
        _debug();
    case 1:
        _info();
    case 2:
        _warning();
    case 3:
        _error();
        break;       
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}