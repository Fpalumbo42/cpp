/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:52:17 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/25 10:47:13 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern      intern;

    AForm        *form = intern.makeForm("ShrubberyCreationForm", "Form");
    AForm        *form2 = intern.makeForm("RobotomyRequestForm", "Form2");
    AForm        *form3 = intern.makeForm("PresidentialPardonForm", "Form3");

    std::cout << *form << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;

    delete form;
    delete form2;
    delete form3;

    try
    {
        AForm   *form4 = intern.makeForm("a", "Form4");
        (void)form4;
    }
    catch (const Intern::UnknownFormException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}