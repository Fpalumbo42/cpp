/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:02:34 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/25 11:19:16 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern &i)
{
	*this = i;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &i)
{
	(void)i;
	return (*this);
}

typedef AForm *(*FormCreator)(std::string const &target);

AForm *createRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

AForm *createShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *createPresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
	std::string formNames[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
	FormCreator formCreators[3] = {createRobotomyRequestForm, createShrubberyCreationForm, createPresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Form created by intern: " << formNames[i] << std::endl;
			return formCreators[i](target);
		}
	}
	throw Intern::UnknownFormException();
	return NULL;
}