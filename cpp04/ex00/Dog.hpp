/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:40:43 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/03 18:18:05 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal { 
    
    public :
        Dog();
        ~Dog();
        Dog(const Dog &d);
        Dog& operator=(const Dog &c);
        virtual void makeSound()const;
    private :
};

#endif
