/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:27:10 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/05/06 15:03:16 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
std::cout << std::endl << YELLOW "------------- Animal -------------" RESET << std::endl << std::endl;

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

std::cout << std::endl << YELLOW "------------- Wrong Animal -------------" RESET << std::endl << std::endl;

const WrongAnimal *wrong = new WrongAnimal();
const WrongAnimal *wrongCat = new WrongCat();

std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
wrong->makeSound();
wrongCat->makeSound();

delete  wrong;
delete  wrongCat;

return 0;

}