/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:23:01 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/03/28 14:49:01 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {

    int i = 1;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)(toupper(argv[i][j])); // car retourne un int
                j++;
            }
            i++;
        }  
        std::cout << std::endl;
    }
}