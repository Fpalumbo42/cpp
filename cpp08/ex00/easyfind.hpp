/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:02:54 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/10 11:18:43 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>
#include <exception>

template <typename T>
int easyfind(T container, int i)
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    if (it == container.end())
    {
        throw std::exception();
    }
    return *it;
}
#endif