/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:02:56 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/09 13:54:18 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    _lenarray = 0;
    array = new T[0];
}

template <typename T>
Array<T>::Array(Array const &instance)
{
    int i = 0;
    _lenarray = instance._lenarray;
    array = new T[_lenarray];
    while (i < _lenarray)
    {
        array[i] = instance.array[i];
        i++;
    }
}
template <typename T>
Array<T>::~Array()
{
    delete[] array;
}
template <typename T>
Array<T> &Array<T>::operator=(Array const &instance)
{
    int i = 0;
    _lenarray = instance._lenarray;
    new T[_lenarray];
    while (i < _lenarray)
    {
        array[i] = instance.array[i];
        i++;
    }
}

template <typename T>
Array<T>::Array(unsigned int lenarray)
{
    _lenarray = lenarray;
    array = new T[_lenarray];
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
    if (i >= _lenarray)
        throw std::exception();
    return (array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_lenarray);
}

#endif