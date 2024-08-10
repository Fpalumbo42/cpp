/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:59:09 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 13:45:28 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

class PresidentialPardonForm : public AForm
{

public:
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &p);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &p);
    std::string getTarget() const;
    virtual void execute(Bureaucrat const &b) const;

private:
    std::string _target;
};

std::ostream &operator<<(std::ostream &str, const PresidentialPardonForm &p);

#endif