/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:56:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/19 10:08:20 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{

    CheckGrade();
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{

    CheckGrade();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name), _grade(b._grade)
{
    *this = b;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{

    if (this != &b)
        _grade = b._grade;
    return *this;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{

    o << b.getName() << " bureaucrat grade " << b.getGrade() << ".";
    return o;
}

std::string Bureaucrat::getName() const
{

    return _name;
}

int Bureaucrat::getGrade() const
{

    return _grade;
}

void Bureaucrat::CheckGrade() const
{

    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrementGrade()
{

    _grade++;
    CheckGrade();
}

void Bureaucrat::incrementGrade()
{

    _grade--;
    CheckGrade();
}