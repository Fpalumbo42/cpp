/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:20:32 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:30:53 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie* horde = zombieHorde(8, "Nicolas");
    for (int i = 0; i < 8; i++)
        horde[i].announce();
    
    delete[] horde;
    return (0);    
}