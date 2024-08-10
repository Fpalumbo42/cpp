/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:56:02 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 13:57:19 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("ShrubberyCreationForm", 145, 137)
{

	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s) : AForm::AForm(s)
{
	_target = s._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s)
{
	AForm::operator=(s);
	_target = s._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

std::ostream &operator<<(std::ostream &str, const ShrubberyCreationForm &s)
{
	return (str << s.getName() << ", signed " << s.getSigned() << ", sign " << s.getSiGrade() << ", exec " << s.getExGrade() << ", target " << s.getTarget());
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{

	if (getSigned() == false)
		throw(AForm::FormNotSignedException());
	else if (b.getGrade() > getExGrade())
		throw(AForm::GradeTooLowException());
	else
		{
		std::ofstream file((_target + "_shrubbery").c_str());
		file << TREE << std::endl;
		file.close();
		}
}