/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:18:29 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/09 13:54:25 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
public:
    Array();
    Array(unsigned int lenarray);
    Array(Array const &instance);
    ~Array();
    Array &operator=(Array const &instance);
    T &operator[](unsigned int i) const;
    unsigned int size() const;

private:
    unsigned int _lenarray;
    T *array;
};

#include "Array.tpp"

#endif
