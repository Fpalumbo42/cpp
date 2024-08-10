/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:05:30 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 11:00:13 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, public ScavTrap {
    
    public :
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &c);
    ~DiamondTrap();
    DiamondTrap& operator=(const DiamondTrap &c);
    void whoAmI();
    
    private :
    
    std::string _name;
};

#endif