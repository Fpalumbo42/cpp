/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:22:26 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/15 12:22:28 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    
    public :
    Cure();
    Cure(const Cure &i);
    ~Cure();
    Cure& operator=(const Cure &i);
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};
#endif