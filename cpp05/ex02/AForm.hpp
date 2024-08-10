/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:39:45 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 13:26:51 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

public:
    AForm();
    AForm(const std::string name, int _tosign, int _toexecute);
    virtual ~AForm();
    AForm(const AForm &b);
    AForm &operator=(const AForm &b);
    std::string getName() const;
    bool getSigned() const;
    void beSigned(Bureaucrat const &b);
    int getSiGrade() const;
    int getExGrade() const;
    virtual void    execute(Bureaucrat const &b) const = 0;

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
    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Form not signed"; }
    };

private:
    const std::string _name;
    bool _signed;
    const int _tosign;
    const int _toexecute;
};

std::ostream &operator<<(std::ostream &o, const AForm &b);

#endif