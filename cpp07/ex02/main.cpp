/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:13:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/09 13:51:50 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> array(10);

    try
    {
        array[6] = 8;
        std::cout << array[6] << std::endl;
        std::cout << array[50] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Index out of bounds." << std::endl;
    }
    return (0);
}