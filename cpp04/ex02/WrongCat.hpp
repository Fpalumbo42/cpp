/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:20:08 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 15:00:18 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal { 
    
    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &a);
        WrongCat& operator=(const WrongCat &c);
        void makeSound()const;
    private :
};

#endif