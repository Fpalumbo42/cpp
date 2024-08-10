/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:21:39 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 11:17:37 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

    DiamondTrap lui("lui");
    DiamondTrap leboug(lui);
    DiamondTrap ok("ok");

    lui.whoAmI();
    leboug.whoAmI();
    ok = lui;
    ok.whoAmI();

    lui.attack("Manu");
    lui.takeDamage( 10 );
    lui.beRepaired( 10 );
}