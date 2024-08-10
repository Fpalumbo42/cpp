/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:21:56 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/23 14:12:30 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fstream>
#include <stack>
#include <cstdlib>
#include <limits.h>

class RPN
{
public:
    RPN();
    ~RPN();
    RPN(RPN const &r);
    RPN &operator=(RPN const &r);
    bool isanoperator(char c);
    int calcul(std::string arg);
    class StackError : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Error : in the stack"; }
    };
    class DivisionError : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Error : Division by 0 not possible"; }
    };
    class TooBigTooLow : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Error : Result in not a int"; }
    };

private:
    std::stack<int> _st;
};

#endif