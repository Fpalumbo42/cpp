/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:57:16 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 13:45:24 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("RobotomyRequestForm", 72, 45)
{

    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &r) : AForm::AForm(r)
{
    _target = r._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &r)
{
    AForm::operator=(r);
    _target = r._target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (_target);
}

std::ostream &operator<<(std::ostream &str, const RobotomyRequestForm &r)
{
    return (str << r.getName() << ", signed " << r.getSigned() << ", sign " << r.getSiGrade() << ", exec " << r.getExGrade() << ", target " << r.getTarget());
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{

    srand(time(0));

    if (getSigned() == false)
        throw(AForm::FormNotSignedException());
    else if (b.getGrade() > getExGrade())
        throw(AForm::GradeTooLowException());
    else
    {
        if (rand() % 2 == 0)
            std::cout << "Then, informs that " << _target << " has been robotomized" << std::endl;
        else
            std::cout << "Robotomy failed" << std::endl;
    }
}