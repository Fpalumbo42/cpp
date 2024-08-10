/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:52:17 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/06/25 10:31:14 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    /* Throw exception when calling constructor with grade too high */
    {
        try
        {
            Bureaucrat mike("Mike", 0);
            std::cout << mike << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "\n --------------------- \n\n";

    /* Throw exception when calling constructor with grade too low */
    {
        try
        {
            Bureaucrat jim("Jim", 151);
            std::cout << jim << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "\n --------------------- \n\n";
    
    /* Throw exeception when calling incrementGrade */
    {    
        try 
        {
            Bureaucrat lui("lui", 3);
            std::cout << lui << std::endl;
            lui.incrementGrade();
            std::cout << lui << std::endl;
            lui.incrementGrade();
            std::cout << lui << std::endl;
            lui.incrementGrade();
            std::cout << lui << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "\n --------------------- \n\n";

    /* Throw exeception when calling decrementGrade */
    {    
        try 
        {
            Bureaucrat alan("Alan", 149);
            std::cout << alan << std::endl;
            alan.decrementGrade();
            std::cout << alan << std::endl;
            alan.decrementGrade();
            std::cout << alan << std::endl;
            alan.decrementGrade();
            std::cout << alan << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}