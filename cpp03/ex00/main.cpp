/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:21:39 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/25 13:42:11 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap a("jfazi");
    ClapTrap b;

    a.attack("Bob");
    a.attack("bob");
    a.attack("bob");

    a.beRepaired(10);
    a.takeDamage(5);
    a.beRepaired(2);
    
    a.takeDamage(5);
    a.takeDamage(10);
    b.attack("bob");
    b = a;
    b.attack("bob");
    
    
}