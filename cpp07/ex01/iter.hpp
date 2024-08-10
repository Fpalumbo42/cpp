/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:17:01 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/03 13:56:25 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T const &))
{
    int i = 0;

    while (i < len)
    {
        f(array[i]);
        i++;
    }
}

#endif