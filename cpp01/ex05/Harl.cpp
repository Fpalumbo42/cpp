/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:16:24 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/08 18:21:25 by fpalumbo         ###   ########.fr       */
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
    
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info() {

    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;   
}

void Harl::_error() {
    
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::_warning() {
    
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain( std::string level ) {
    
    int i = 0;
    void (Harl::*tab_fct[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    while (level.compare(_tab_level[i]) != 0 && i < 4)
    {
        i++;
    }
    if (i < 4)
    {
        (this->*tab_fct[i])();
    }
}