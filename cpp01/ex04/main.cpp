/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:50:53 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/15 16:07:09 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"

void ft_replace(std::string file_name, std::string s1, std::string s2) {

    size_t found = 0;
    size_t len_s1 = s1.length();
    std::string line;
    std::string str;

    std::ifstream file(file_name.c_str());
    if (!file.is_open())
        {
            std::cout << RED "Error" << std::endl;
            std::cout << "Cannot open file" RESET << std::endl;
            return ;
        }
    else
    {
        while (getline(file, line))
        {
            str += line;
           if(!file.eof())
               str += '\n'; 
        }
        file.close();
        while ((found = str.find(s1, found)) != std::string::npos)
        {
            if (found != std::string::npos)
            {
                str.erase(found, len_s1);
                str.insert(found, s2);
                found += s2.length();
            }
        }
    }
    std::ofstream file_replace((file_name += ".replace").c_str());
    file_replace << str;
}

int main(int argc, char **argv) {
    
    if (argc != 4)
    {
        std::cout << RED "Error" << std::endl;
        std::cout << "Expected 3 arguments : a filename and two strings" RESET << std::endl;
    }
    else
        ft_replace(argv[1], argv[2], argv[3]);
}