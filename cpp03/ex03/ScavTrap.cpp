/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:29:48 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 10:46:11 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    
    std::cout << BLUE "ScavTrap default constructor called" RESET << std::endl;
    _name = "default";
    _hit = 100;
    _energy = 50;
    _attack = 20;
}

ScavTrap::ScavTrap(std::string name) {
    
    std::cout << BLUE "ScavTrap constructor called" RESET << std::endl;
    _name = name;
    _hit = 100;
    _energy = 50;
    _attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &c) {

    *this = c;
    std::cout << BLUE "ScavTrap copy constructor called" RESET << std::endl;
    return;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &c) {
    
    std::cout << GREEN "operator = called" RESET << std::endl;
    this->_name = c._name;
    this->_hit = c._hit;
    this->_attack = c._attack;
    this->_energy = c._energy;
    
    return (*this);
}

ScavTrap::~ScavTrap() {
    
    std::cout << RED "ScavTrap destructor called" RESET << std::endl;
}

void ScavTrap::guardGate() {
    
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
