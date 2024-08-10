/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:39:37 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 10:07:44 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default_Form"), _signed(false), _tosign(150), _toexecute(150)
{
}

Form::Form(const std::string name, const int tosign, const int toexecute) : _name(name), _signed(false), _tosign(tosign), _toexecute(toexecute)
{

    if (this->_tosign < 1)
        throw(Form::GradeTooHighException());
    if (this->_tosign > 150)
        throw(Form::GradeTooLowException());
    if (this->_toexecute < 1)
        throw(Form::GradeTooHighException());
    if (this->_toexecute > 150)
        throw(Form::GradeTooLowException());
}

Form::~Form()
{
}

Form::Form(const Form &f) : _name(f._name), _signed(f._signed), _tosign(f._tosign), _toexecute(f._toexecute)
{

    *this = f;
}

Form &Form::operator=(Form const &f)
{
    _signed = f._signed;
    return (*this);
}

std::string Form::getName() const
{

    return (_name);
}

bool Form::getSigned() const
{

    return (_signed);
}

int Form::getSiGrade() const
{

    return (_tosign);
}

int Form::getExGrade() const
{

    return (_toexecute);
}

void Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > _tosign)
        throw(Form::GradeTooLowException());
    else
        _signed = true;
}

std::ostream &operator<<(std::ostream &str, Form const &f)
{
    return (str << f.getName() << ", signed " << f.getSigned() << ", grade to sign " << f.getSiGrade() << ", grade to execute " << f.getExGrade());
}