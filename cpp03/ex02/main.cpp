/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:21:39 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 11:14:08 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    ClapTrap a("jfazi");
    ScavTrap b;
    ScavTrap c("Fabio");
    FragTrap d("npatron");
    d.attack("Jean");
    a.attack("jim");
    a.attack("jim");
    a.attack("jim");
    c.attack("jeanne");

    a.beRepaired(10);
    a.takeDamage(5);
    a.beRepaired(2);
    c.takeDamage(20);
    d.takeDamage(30);
    c.beRepaired(10);
    c.guardGate();
    
    a.takeDamage(5);
    a.takeDamage(10);
    b.attack("bob");
    b = c;
    b.attack("bob");
    d.highFivesGuys();

    
}