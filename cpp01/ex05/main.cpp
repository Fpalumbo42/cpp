/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:21:25 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/04/08 18:19:48 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {

	Harl harl;

	if (argc != 2)
	{
		std::cout << "arguments are incorrect" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
}
