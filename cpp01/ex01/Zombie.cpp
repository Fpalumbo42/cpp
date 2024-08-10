/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:14:16 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:32:06 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	  
}

Zombie::Zombie(std::string name) {
    _name = name;
   // announce();
}

Zombie::~Zombie() {
	
}

void Zombie::announce() {

    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

