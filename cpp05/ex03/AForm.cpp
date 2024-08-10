/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:08:00 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 10:06:47 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default_AForm"), _signed(false), _tosign(150), _toexecute(150)
{
}

AForm::AForm(const std::string name, const int tosign, const int toexecute) : _name(name), _signed(false), _tosign(tosign), _toexecute(toexecute)
{

    if (this->_tosign < 1)
        throw(AForm::GradeTooHighException());
    if (this->_tosign > 150)
        throw(AForm::GradeTooLowException());
    if (this->_toexecute < 1)
        throw(AForm::GradeTooHighException());
    if (this->_toexecute > 150)
        throw(AForm::GradeTooLowException());
}

AForm::~AForm()
{
}

AForm::AForm(const AForm &f) : _name(f._name), _signed(f._signed), _tosign(f._tosign), _toexecute(f._toexecute)
{

    *this = f;
}

AForm &AForm::operator=(AForm const &f)
{
    _signed = f._signed;
    return (*this);
}

std::string AForm::getName() const
{

    return (_name);
}

bool AForm::getSigned() const
{

    return (_signed);
}

int AForm::getSiGrade() const
{

    return (_tosign);
}

int AForm::getExGrade() const
{

    return (_toexecute);
}

void AForm::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > _tosign)
        throw(AForm::GradeTooLowException());
    else
        _signed = true;
}

std::ostream &operator<<(std::ostream &str, AForm const &f)
{
    return (str << f.getName() << ", signed " << f.getSigned() << ", grade to sign " << f.getSiGrade() << ", grade to execute " << f.getExGrade());
}