/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:21:39 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/25 13:41:55 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

    ClapTrap a("jfazi");
    ScavTrap b;
    ScavTrap c("Fabio");
    a.attack("bob");
    a.attack("bob");
    a.attack("bob");
    c.attack("Jim");

    a.beRepaired(10);
    a.takeDamage(5);
    a.beRepaired(2);
    c.takeDamage(20);
    c.beRepaired(10);
    c.guardGate();
    
    a.takeDamage(5);
    a.takeDamage(10);
    b.attack("Jean");
    b = c;
    b.attack("Jean");
}