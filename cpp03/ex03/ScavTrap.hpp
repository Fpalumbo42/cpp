/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:29:44 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 11:02:00 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

//classe fille 

class ScavTrap : virtual public ClapTrap {
    
    public :
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &c);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap &c);
    void guardGate();
    
    private :
};

#endif