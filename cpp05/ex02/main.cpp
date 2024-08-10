/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:52:17 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/25 10:42:14 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 40);
        AForm       *form = new PresidentialPardonForm("Form");
        AForm       *form2 = new RobotomyRequestForm("Form2");
        AForm       *form3 = new ShrubberyCreationForm("arbre");

        std::cout << *bureaucrat << std::endl;
        std::cout << *form << std::endl;
        std::cout << *form2 << std::endl;
        std::cout << *form3 << std::endl;
        
        std::cout << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Sign Form section " << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        bureaucrat->signForm(*form);
        bureaucrat->signForm(*form2);
        bureaucrat->signForm(*form3);

        std::cout << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << *bureaucrat << std::endl;
        std::cout << *form << std::endl;
        std::cout << *form2 << std::endl;
        std::cout << *form3 << std::endl;

        std::cout << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Execute Form section " << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        bureaucrat->executeForm(*form);
        bureaucrat->executeForm(*form2);
        bureaucrat->executeForm(*form3);
    
        delete bureaucrat;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}