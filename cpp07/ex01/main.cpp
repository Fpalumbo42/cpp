/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:13:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/09 11:00:03 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printplus(T oui)
{
    std::cout << oui + 1 << std::endl;
}
int main(void)
{
    int tmp[] = {0, 1, 2, 3, 4};
    char tmp2[] = {'a', 'b', 'c', 'd', 'e'};

    iter(tmp, 5, printplus);
    iter(tmp2, 5, printplus);
}