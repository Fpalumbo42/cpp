/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:09:23 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/17 17:05:22 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:

    MutantStack() : std::stack<T>()
    {
    }
    MutantStack(const MutantStack<T> &rhs)
    {
        *this = rhs;
        return;
    }
    MutantStack<T> &operator=(const MutantStack<T> &rhs)
    {
        if (this != &rhs)
            this->c = rhs.c;
        return (*this);
    }
    virtual ~MutantStack()
    {
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
};

#endif