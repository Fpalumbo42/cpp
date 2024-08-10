/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:14:49 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/02 10:34:43 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate()
{
    srand(time(0));
    int randomValue = rand() % 3;

    if (randomValue == 0)
        return new A();
    else if (randomValue == 1)
        return new B();
    else
        return new C();
}
void identify(Base *p)
{
    // check si cest possible de cast

    if (dynamic_cast<A *>(p))
        std::cout << "Ptr : Type = A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Ptr : Type = B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Ptr : Type = C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
    // car dynamiccast renvoie une exception

    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "Ref : Type = A" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "Ref : Type = B" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "Ref : Type = C" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    std::cout << "Type = Unknown" << std::endl;
}