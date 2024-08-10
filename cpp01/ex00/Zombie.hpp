/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:22:54 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/05 18:03:38 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iomanip>
#include <iostream>

class Zombie
{
	public:
		Zombie(); // DEFAULT CONSTRUCTOR
		Zombie(std::string name); // CONSTRUCTOR WITH NAME
		~Zombie(); // DESTRUCTOR
		void announce( void );
	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
