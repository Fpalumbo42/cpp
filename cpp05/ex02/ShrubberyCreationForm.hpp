/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:55:59 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/18 13:59:01 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

#define TREE "\
          *\n\
         /|\\\n\
        /*|O\\\n\
       /*/|\\*\\\n\
      /X/O|*\\X\\\n\
     /*/X/|\\X\\*\\\n\
    /O/*/X|*\\O\\X\\\n\
   /*/O/X/|\\X\\*\\O\\\n\
  /X/O/*/X|O\\X\\*\\O\\\n\
 /O/X/*/O/|\\X\\*\\O\\X\\\n\
        |X|X|\n\
        |X|X|\n\
"
class ShrubberyCreationForm : public AForm
{

public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &s);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &s);
    std::string getTarget() const;
    void execute(Bureaucrat const &b) const;

private:
    std::string _target;
};

std::ostream &operator<<(std::ostream &str, const ShrubberyCreationForm &s);

#endif