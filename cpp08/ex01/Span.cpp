/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:30:21 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/07 16:17:09 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _max(N)
{
}

Span::~Span()
{
}

Span::Span(const Span &s)
{
    this->_max = s._max;
    this->_span = s._span;
}

Span &Span::operator=(const Span &s)
{
    this->_max = s._max;
    this->_span = s._span;
    return (*this);
}

char const *Span::SpanFullException::what() const throw()
{
    return ("Span is full");
}

char const *Span::SpanSizeException::what() const throw()
{
    return ("Span size is to low");
}

void Span::addNumber(int num)
{
    if (_span.size() >= _max)
    {
        throw Span::SpanFullException();
    }
    _span.push_back(num);
}
int Span::shortestSpan()
{
    if (_span.size() < 2)
    {
        throw SpanSizeException();
    }

    std::sort(_span.begin(), _span.end());
    std::vector<int>::iterator it = _span.begin();
    int flag = 2147483647;

    while (it != _span.end())
    {
        std::vector<int>::iterator jt = _span.begin();
        while (jt != _span.end())
        {
            if (it != jt)
            {
                int tmp = std::abs(*it - *jt);
                if (tmp < flag)
                {
                    flag = tmp;
                }
            }
            jt++;
        }
        it++;
    }

    return flag;
}
int Span::longestSpan()
{
    if (_span.size() > 2)
    {
        std::sort(_span.begin(), _span.end());
        std::vector<int>::iterator it = _span.begin();
        std::vector<int>::iterator jt = _span.end();
        jt -= 1;
        return (*jt - *it);
    }
    else
        throw Span::SpanSizeException();
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it < end; it++)
    {
        addNumber(*it);
    }
}