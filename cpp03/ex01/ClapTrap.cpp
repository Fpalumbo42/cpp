/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:21:20 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 10:45:32 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    
    std::cout << BLUE "ClapTrap default constructor called" RESET << std::endl;
    _name = "default";
    _hit = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(std::string name) {

    std::cout << BLUE "ClapTrap constructor with name called" RESET << std::endl;
    _name = name;
    _hit = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &c) {

    *this = c;
    std::cout << BLUE "ClapTrap copy constructor called" RESET << std::endl;
    return;
}
 
ClapTrap::~ClapTrap() {
    
    std::cout << RED "ClapTrap destructor called" RESET << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &c) {
    
    std::cout << GREEN "operator = called" RESET << std::endl;
    this->_name = c._name;
    this->_hit = c._hit;
    this->_attack = c._attack;
    this->_energy = c._energy;
    
    return (*this);
}


void ClapTrap::attack(const std::string& target) {
    
    if (_hit <= 0)
        std::cout << "ClapTrap " << _name << " is dead" << std::endl;
    else if (_energy > 0)
    {
        _energy -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attack << " points of damage!" << std::endl;
    }
    else
        std::cout << _name << " is out of energy give some apple" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    

    if (_energy < 0)
        std::cout << "ClapTrap " << _name << " can't be repaired" << std::endl;
    else
    {
        _energy -= 1;
        _hit += amount;
        std::cout << "ClapTrap " << _name << " repair " << amount << 
            " hit point for a total of " << _hit << " hit point" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    if (_hit > 0)
    {
        _hit -= amount;
        std::cout << "ClapTrap " << _name << " take " << amount << 
            " damage " << std::endl;
    }
    if (_hit <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead" << std::endl;
    }
}