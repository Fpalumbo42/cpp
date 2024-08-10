/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:39:45 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 10:07:48 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
    Form();
    Form(const std::string name, int _tosign, int _toexecute);
    ~Form();
    Form(const Form &b);
    Form &operator=(const Form &b);
    std::string getName() const;
    bool getSigned() const;
    void beSigned(Bureaucrat const &b);
    int getSiGrade() const;
    int getExGrade() const;

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
    bool _signed;
    const int _tosign;
    const int _toexecute;
};

std::ostream &operator<<(std::ostream &o, const Form &b);

#endif