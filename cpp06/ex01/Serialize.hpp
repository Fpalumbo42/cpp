/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:25:16 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/20 11:05:57 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data
{
    int id;
    std::string name;
    float value;
};

class Serialize
{
public:
    Serialize();
    ~Serialize();
    Serialize(const Serialize &s);
    Serialize	&operator=(Serialize const &s);
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif