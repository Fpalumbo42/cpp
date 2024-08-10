/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:22:46 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:09:43 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    
    std::cout << "Constructor " << _name << " called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Constructor " << _name << " called" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Destructor " << _name << " called" << std::endl;
}

void Zombie::announce() {

    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
