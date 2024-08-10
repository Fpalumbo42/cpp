/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:15:30 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/08 18:19:09 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
    
    public :
        Harl();
        ~Harl();
        void complain( std::string level );
    private :
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
        std::string _tab_level[4];
};

#endif