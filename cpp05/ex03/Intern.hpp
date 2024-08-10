/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:02:21 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/25 11:17:52 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

public:
    Intern();
    ~Intern();
    Intern(Intern const &i);
    Intern &operator=(Intern const &i);

    AForm *makeForm(std::string const &formName, std::string const &target);
    class UnknownFormException : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Unknow Form"; }
    };
};

#endif