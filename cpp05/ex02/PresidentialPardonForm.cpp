/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:58:28 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 14:13:05 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :AForm::AForm("PresidentialPardonForm", 25, 5) {

    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p):AForm::AForm(p)
{
    _target = p._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
	AForm::operator=(p);
	_target = p._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

std::ostream	&operator<<(std::ostream &str, const PresidentialPardonForm &p)
{
	return (str << p.getName() << ", signed " << p.getSigned() << ", sign " << p.getSiGrade() << ", exec " << p.getExGrade() << ", target " << p.getTarget());
}

void    PresidentialPardonForm::execute(Bureaucrat const &b) const {

    if (getSigned() == false)
        throw(AForm::FormNotSignedException());
    else if (b.getGrade() > getExGrade())
        throw(AForm::GradeTooLowException());
    else
        std::cout << "Informs that " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}