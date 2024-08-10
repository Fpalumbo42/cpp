/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:25:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/20 11:05:28 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
}
Serialize::~Serialize()
{
}
Serialize::Serialize(const Serialize &s)
{
    *this = s;
}
Serialize	&Serialize::operator=(Serialize const &s)
{
    (void)s;
    return (*this);
}

uintptr_t Serialize::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr); // ptr vers uniptr
}

Data *Serialize::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw); // ptr non signe vers ptr struct data
}