/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:46:08 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:15:59 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    _type = "Default weapon";
}

Weapon::Weapon(std::string type) {

    _type = type;
}

Weapon::~Weapon() {
    
}

std::string const Weapon::getType() {
    
    return(_type);
}

void Weapon::setType(std::string type) {
    
     _type = type;
}