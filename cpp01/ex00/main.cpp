/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:49:34 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 11:07:48 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    Zombie* z;
    Zombie a("Nicloas");

    z = newZombie("Fabio");
    z->announce();
    a.announce();
    randomChump("apagnan");
    delete z;
    return (0);
}