/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:18:44 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/07 12:33:48 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int main() {
    
    std::string str = "HI THIS IS BRAIN";
    std::string *strptr = &str;
    std::string &strref = str;

        //adresse
    std::cout << &str << std::endl;
    std::cout << strptr << std::endl;
    std::cout << &strref << std::endl;
        //valeur
    std::cout << str << std::endl;
    std::cout << *strptr << std::endl;
    std::cout << strref << std::endl;
}