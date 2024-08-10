/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:27:51 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/07 09:22:28 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
#include "Brain.hpp"

# define RESET   "\033[0m"
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

//classe abstraite
 
class AAnimal {

    public :
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &a);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal &a);
        std::string getType( void ) const;
        virtual void makeSound() const = 0; //methode pure

    protected :
        std::string _type;

    private :
};


#endif