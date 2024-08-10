/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:21:59 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/23 15:06:25 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}
RPN::~RPN()
{
}
RPN::RPN(RPN const &r)
{
    _st = r._st;
    *this = r;
}
RPN &RPN::operator=(RPN const &r)
{
    _st = r._st;
    return *this;
}

bool RPN::isanoperator(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*')
        return true;
    else
        return false;
}
int RPN::calcul(std::string arg)
{
    int i = 0;
    long long tmp;
    long long tmp2;
    long long result;

    while (arg[i])
    {
        if (std::isdigit(arg[i]))
            _st.push(arg[i] - '0');
        else if (isanoperator(arg[i]) && _st.size() >= 2)
        {
            tmp = _st.top();
            _st.pop();
            tmp2 = _st.top();
            _st.pop();
            if (arg[i] == '-')
                result = tmp2 - tmp;
            else if (arg[i] == '+')
                result = tmp2 + tmp;
            else if (arg[i] == '*')
                result = tmp2 * tmp;
            else if (arg[i] == '/')
            {
                if (tmp != 0)
                    result = tmp2 / tmp;
                else
                    throw RPN::DivisionError();
            }
            if (result > INT_MAX || result < INT_MIN)
                throw RPN::TooBigTooLow();
            _st.push(result);
        }
        else if (arg[i] == ' ')
        {
            i++;
            continue;
        }
        else
            throw RPN::StackError();
        i++;
    }
    return result;
}