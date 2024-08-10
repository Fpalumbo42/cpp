/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:56:16 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 10:07:29 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &b);
    Bureaucrat &operator=(const Bureaucrat &b);
    void CheckGrade() const;
    std::string getName() const;
    int getGrade() const;
    void decrementGrade();
    void incrementGrade();

    void signForm(Form &f) const;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Grade too low"; }
    };

private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);

#endif