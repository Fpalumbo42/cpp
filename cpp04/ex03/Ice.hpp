/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:12:55 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/14 16:08:07 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    
    public :
    Ice();
    Ice(const Ice &i);
    ~Ice();
    Ice& operator=(const Ice &i);
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};
#endif