/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:36:17 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/07 13:11:21 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
  
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string const getType();
		void setType(std::string type);
  
	private :
		std::string _type;	
};

#endif