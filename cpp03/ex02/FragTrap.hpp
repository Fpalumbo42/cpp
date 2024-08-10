/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:42:43 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 10:53:39 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

//classe fille 

class FragTrap : public ClapTrap {
    
    public :
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &c);
    ~FragTrap();
    FragTrap& operator=(const FragTrap &c);
    void highFivesGuys(void);
    
    private :
};

#endif