/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:40:43 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:52:17 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal { 
    
    public :
        Dog();
        ~Dog();
        Dog(const Dog &d);
        Dog& operator=(const Dog &c);
        virtual void makeSound()const;
        
    private :
        Brain* _brain;
};

#endif
