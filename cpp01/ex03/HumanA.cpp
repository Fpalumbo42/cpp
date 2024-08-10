/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:03:21 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:14:30 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//utlisation ref

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) //initialisation 
{
}

HumanA::~HumanA() {

}

void	HumanA::attack() {

	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}