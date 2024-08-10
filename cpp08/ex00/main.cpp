/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:13:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/10 11:18:58 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::list<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    try
    {
        std::cout << easyfind(v, 10) << std::endl;
        std::cout << easyfind(v, 15) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error" << std::endl;
    }

    std::deque<int> c;
    c.push_back(10);
    c.push_back(11);
    c.push_back(12);
    c.push_back(13);
    c.push_back(14);
    try
    {
        std::cout << easyfind(c, 10) << std::endl;
        std::cout << easyfind(c, 15) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error" << std::endl;
    }
    return (0);
}