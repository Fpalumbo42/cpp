/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:43:59 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/23 11:09:48 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits.h>
#include <sys/time.h>
#include <vector>
#include <deque>
#include <algorithm>


class PmergeMe
{

public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &p);
    PmergeMe &operator=(const PmergeMe &p);
    void RunProgramm(int argc, char **argv);

    void FillContainerVector(int argc, char **argv);
    void SortMaxVector();
    bool isSortedVector(const std::vector<int> &vec);
    void DichoInsertVector();

    void FillContainerDeque(int argc, char **argv);
    void SortMaxDeque();
    bool isSortedDeque(const std::deque<int> &deq);
    void DichoInsertDeque();

    class BadArgument : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Error : bad argument"; }
    };

private:

    std::vector<int> _Vector;
    std::vector<std::pair<int, int> > _PairVector;
    std::vector<int> _MaxVector;
    std::vector<int> _MinVector;
    std::vector<int> _FinalVector;
    
    std::deque<int> _Deque;
    std::deque<std::pair<int, int> > _PairDeque;
    std::deque<int> _MaxDeque;
    std::deque<int> _MinDeque;

    bool _unpairDeque;
    int _nbUnpairDeque;
    bool _unpairVector;
    int _nbUnpairVector;
    int _nb;
};

#endif