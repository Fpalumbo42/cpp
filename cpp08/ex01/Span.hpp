/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:27:19 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/07 16:10:58 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

class Span
{
public:
    Span(unsigned int N);
    ~Span();
    Span(const Span &s);
    Span &operator=(Span const &s);
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    class SpanFullException : public std::exception
    {
    public:
        virtual char const *what(void) const throw();
    };

    class SpanSizeException : public std::exception
    {
    public:
        virtual char const *what(void) const throw();
    };

private:
    unsigned int _max;
    std::vector<int> _span;
};
#endif