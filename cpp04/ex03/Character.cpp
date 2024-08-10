/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:51:54 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/16 16:32:51 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) {
    
    int  i = 0;
    
    std::cout << BLUE "Character constuctor called" RESET << std::endl;
    while (i < 4)
    {
        _inventory[i] = NULL;
        i++;
    }
    _name = name;
}

Character::Character(Character const &c) {

    int i = 0;

    std::cout << BLUE "Character copy constuctor called" RESET << std::endl;
    while (i < 4)
    {
        _inventory[i] = c._inventory[i];
        i++;
    }
    *this = c;
}

Character::~Character() {
    
    int i = 0;
    
    std::cout << RED "Character default destructor called" RESET << std::endl;
    while (i < 4)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
        i++;
    }
}

Character& Character::operator=(Character const &c) {
    
    int i = 0;

    std::cout << GREEN "Character operator = called" RESET << std::endl;
    _name = c._name;
    while (i < 4)
    {
        _inventory[i] = c._inventory[i];
        i++;
    }
    return *this;
}

const std::string& Character::getName() const {

    return _name;
}

void Character::equip(AMateria *m) {
    
    int i = 0;

    while (i < 4)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            std::cout << MAGENTA "Character " << _name << " equip " << m->getType() << RESET << std::endl;
            return;
        }
        i++;
    }
    std::cout << MAGENTA "Character " << _name << " can't equip" << RESET << std::endl;
}

void Character::unequip(int idx) {
    
    if (idx < 0 || idx > 4)
    {
        std::cout << "bad index" << std::endl;
        return;
    }
    else if (_inventory[idx] != NULL)
    {
        std::cout << MAGENTA "Character " << _name << " unnequip Materia " << _inventory[idx]->getType() << " at place " << idx  << RESET << std::endl;
        _inventory[idx] = NULL;
        return;
    }
    std::cout << MAGENTA "Inventory is empty at place " << idx << RESET << std::endl;
}

void Character::use(int idx, ICharacter &target) {
    
    if (_inventory[idx] != NULL)
    {
        _inventory[idx]->use(target);
        std::cout << MAGENTA "Character " << _name << " uses " << _inventory[idx]->getType() << RESET << std::endl;
    }
    else
        std::cout << MAGENTA "Character " << _name << " can't use" << RESET << std::endl;
}