/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:16:09 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 14:35:48 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"

class WrongAnimal {

    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &a);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal &a);
        std::string getType( void ) const;
        void makeSound() const;

    protected :
        std::string _type;

    private :
};


#endif