/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:03:04 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:19:24 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


//utilisation pointeur 

HumanB::HumanB() {
    _name = "Default";
	_weapon = NULL;
}

HumanB::HumanB(std::string name) {
    
    _name = name;
	_weapon = NULL;
}
HumanB::~HumanB() {
    
}

void    HumanB::setWeapon(Weapon &weapon) {

    _weapon = &weapon;
    
}

void    HumanB::attack() {

    if (_weapon == NULL)
		std::cout << _name << " has no weapon" << std::endl;
	else
	{
		std::cout << _name << " attacks with his ";
		std::cout << _weapon->getType() << std::endl;
	}
}