/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:48:09 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/03 12:04:21 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T& a, T& b)
{
    if (a < b)
        return a;
    else 
        return b;
}

template <typename T>
T max(T& a, T& b)
{
    if (a > b)
        return a;
    else 
        return b;
}
#endif