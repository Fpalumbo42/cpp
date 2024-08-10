/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:54:08 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:50:05 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain {
  
  public :
    Brain();
    ~Brain();
    Brain(const Brain& b);
    Brain& operator=(const Brain& c);
  protected :
    std::string ideas[100];
  private :  
};

#endif