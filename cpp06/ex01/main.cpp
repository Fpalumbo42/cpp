/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:13:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/02 10:33:21 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{

    Data originalData;
    originalData.id = 42;
    originalData.name = "oui";
    originalData.value = 3.14f;

    uintptr_t raw = Serialize::serialize(&originalData);
    Data *deserializedData = Serialize::deserialize(raw);

    if (deserializedData == &originalData)
    {
        std::cout << "les pointeurs sont égaux." << std::endl;
    }
    else
    {
        std::cout << "les pointeurs ne sont pas égaux." << std::endl;
    }

    return 0;
}