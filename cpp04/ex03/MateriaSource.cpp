/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:31:49 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/16 16:43:39 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    
    int i = 0;

    std::cout << BLUE "MateriaSource default constuctor called" RESET << std::endl;
    while (i < 4)
    {
        _materia[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(MateriaSource const & m) {
    
    *this = m;
}

MateriaSource::~MateriaSource() {

    int i = 0;

    std::cout << RED "MateriaSource default destructor called" RESET << std::endl;
    while (i < 4)
    {
        if (_materia[i] != NULL)
            delete _materia[i];
        i++;
    }
}

MateriaSource& MateriaSource::operator=( MateriaSource const & m ) {

    int i = 0;

    std::cout << GREEN "MateriaSource operator = called" RESET << std::endl;
    while (i < 4)
    {
        _materia[i] = m._materia[i];
        i++;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {

    int i = 0;
    
    while (i < 4)
    {
        if (_materia[i] == NULL)
        {
            _materia[i] = m;
            return;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(const std::string &type) {

    int i = 0;
    
    while(i < 4)
    {
        if (_materia[i])
        {
            if (type == "ice")
                return new Ice();
            else if (type == "cure")
                return new Cure();
        }
        i++;
    }
    return NULL;
}