/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:08:41 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 17:42:44 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    
std::cout << YELLOW "-----------------------------------------------" RESET << std::endl << std::endl;
int l = 0;

const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;

std::cout << YELLOW "-----------------------------------------------" RESET << std::endl << std::endl;

const Animal* tab[10];

while (l != 10)
{
    if (l < 5)
        tab[l] = new Dog();
    else
        tab[l] = new Cat();
    l++;
}
l = 0;
while (l != 10)
{
    delete tab[l];
    l++;
}

Dog tmp;
Dog tmp2;

tmp.makeSound();

tmp = tmp2;
return 0;
}