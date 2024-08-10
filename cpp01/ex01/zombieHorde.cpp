/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:31:35 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:32:11 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {

    Zombie *tab_zombie = new Zombie[N]; //tableau de pointeurs vers des objets Zombie
    
    int i = 0;
    while (i < N)
	{
        tab_zombie[i] = Zombie(name);
        i++;
    }
    return tab_zombie;
}
