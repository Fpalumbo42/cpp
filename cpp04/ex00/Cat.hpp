/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:20:08 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/03 18:18:07 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal { 
    
    public :
        Cat();
        ~Cat();
        Cat(const Cat &a);
        Cat& operator=(const Cat &c);
        virtual void makeSound()const;
    private :
};

#endif