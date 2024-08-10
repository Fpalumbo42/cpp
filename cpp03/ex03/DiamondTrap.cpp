/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:05:34 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 11:18:21 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    
    std::cout << BLUE "DiamondTrap default constructor called" RESET << std::endl;
    _name = "default";
    ClapTrap::_name = _name + "_clap_name";
    FragTrap::_hit = 100;
    ScavTrap::_energy = 100;
    FragTrap::_attack = 30;
}

DiamondTrap::DiamondTrap(std::string name) {
    
    std::cout << BLUE "DiamondTrap constructor called" RESET << std::endl;
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    FragTrap::_hit = 100;
    ScavTrap::_energy = 100;
    FragTrap::_attack = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &c) {

    std::cout << BLUE "DiamondTrap copy constructor called" RESET << std::endl;
    *this = c;
    return;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap &c) {
    
    std::cout << GREEN "operator = called" RESET << std::endl;
    this->_name = c._name;
    this->_hit = c._hit;
    this->_attack = c._attack;
    this->_energy = c._energy;
    
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    
    std::cout << RED "DiamondTrap destructor called" RESET << std::endl;
}

void DiamondTrap::whoAmI() {
    
    std::cout << "Name is " << _name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}