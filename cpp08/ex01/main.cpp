/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:00:46 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/10 11:07:52 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        Span sp2(5);
        std::vector<int> v;
        v.push_back(-6);
        v.push_back(-3);
        v.push_back(-17);
        v.push_back(-9);
        v.push_back(-11);
        sp2.addRange(v.begin(), v.end());
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Span sp3(0);
        sp3.addNumber(6);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Span sp4(6);
        sp4.addNumber(6);
        std::cout << sp4.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}