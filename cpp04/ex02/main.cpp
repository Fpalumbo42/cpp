/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:08:41 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/07 09:24:55 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    
std::cout << YELLOW "-----------------------------------------------" RESET << std::endl << std::endl;
int l = 0;

const AAnimal* j = new Dog();
const AAnimal* i = new Cat();
delete j;
delete i;

std::cout << YELLOW "-----------------------------------------------" RESET << std::endl << std::endl;

const AAnimal* tab[10];

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
Cat tmp3;


tmp = tmp2;

std::cout << YELLOW "-----------------------------------------------" RESET << std::endl << std::endl;
tmp.makeSound();
tmp3.makeSound();

//AAnimal lui; //imposible car classe abstraite

return 0;
}