/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:20:08 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:52:19 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal { 
    
    public :
        Cat();
        ~Cat();
        Cat(const Cat &a);
        Cat& operator=(const Cat &c);
        virtual void makeSound()const;
    private :
        Brain* _brain;
};

#endif