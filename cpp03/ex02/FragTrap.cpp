/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:42:47 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 10:52:18 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    
    std::cout << BLUE "FragTrap default constructor called" RESET << std::endl;
    _name = "default";
    _hit = 100;
    _energy = 100;
    _attack = 30;
}

FragTrap::FragTrap(std::string name) {
    
    std::cout << BLUE "FragTrap constructor called" RESET << std::endl;
    _name = name;
    _hit = 100;
    _energy = 100;
    _attack = 30;
}

FragTrap::FragTrap(const FragTrap &c) {

    *this = c;
    std::cout << BLUE "FragTrap copy constructor called" RESET << std::endl;
    return;
}

FragTrap& FragTrap::operator= (const FragTrap &c) {
    
    std::cout << GREEN "operator = called" RESET << std::endl;
    this->_name = c._name;
    this->_hit = c._hit;
    this->_attack = c._attack;
    this->_energy = c._energy;
    
    return (*this);
}

FragTrap::~FragTrap() {
    
    std::cout << RED "FragTrap destructor called" RESET << std::endl;
}

void FragTrap::highFivesGuys() {
    
    std::cout << "High Fives ?" << std::endl;
}