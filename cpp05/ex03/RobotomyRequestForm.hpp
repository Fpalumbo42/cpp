/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:57:32 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 13:45:20 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <time.h>
#include <stdlib.h>

class RobotomyRequestForm : public AForm
{

public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &r);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &r);
    std::string getTarget() const;
    void execute(Bureaucrat const &b) const;

private:
    std::string _target;
};

std::ostream &operator<<(std::ostream &str, const RobotomyRequestForm &r);

#endif