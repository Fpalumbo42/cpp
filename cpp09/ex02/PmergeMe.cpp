/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpalumbo <fpalumbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:44:43 by fpalumbo          #+#    #+#             */
/*   Updated: 2024/07/23 12:04:29 by fpalumbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    _unpairVector = false;
    _unpairDeque = false;
}
PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe(const PmergeMe &p)
{
    _Vector = p._Vector;
    _Deque = p._Deque;
    _unpairDeque = p._unpairDeque;
    _unpairVector = p._unpairDeque;
    _nb = p._nb;
    *this = p;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &p)
{
    
    _Vector = p._Vector;
    _Deque = p._Deque;
    _unpairDeque = p._unpairDeque;
    _unpairVector = p._unpairVector;
    return *this;
}

size_t get_current_time(void)
{
    struct timeval time;

    if (gettimeofday(&time, NULL) == -1)
        std::cout << "gettimeofday() error" << std::endl;
    return (time.tv_sec * 1000 + time.tv_usec / 1000);
}

/* Deque */
void PmergeMe::DichoInsertDeque()
{
    size_t i = 0;

    while (i < _MinDeque.size())
    {
        size_t moit = _MaxDeque.size() / 2;
        if (_MaxDeque[moit] > _MinDeque[i])
        {
            while (moit > 0)
            {
                if (_MaxDeque[moit - 1] < _MinDeque[i])
                {
                    _MaxDeque.insert(_MaxDeque.begin() + moit, _MinDeque[i]);
                    break;
                }
                moit--;
            }
            if (moit == 0)
            {
                _MaxDeque.insert(_MaxDeque.begin(), _MinDeque[i]);
            }
        }
        else
        {
            while (moit < _MaxDeque.size())
            {
                if (_MaxDeque[moit] >= _MinDeque[i])
                {
                    _MaxDeque.insert(_MaxDeque.begin() + moit, _MinDeque[i]);
                    break;
                }
                moit++;
            }
            if (moit == _MaxDeque.size())
            {
                _MaxDeque.insert(_MaxDeque.end(), _MinDeque[i]);
            }
        }
        i++;
    }
}

bool PmergeMe::isSortedDeque(const std::deque<int> &deq)
{
    for (size_t i = 1; i < deq.size(); ++i)
    {
        if (deq[i - 1] > deq[i])
        {
            return false;
        }
    }
    return true;
}

void PmergeMe::SortMaxDeque()
{
    if (_MaxDeque.size() <= 1 || isSortedDeque(_MaxDeque))
        return;
    else
    {
        for (size_t i = 0; i + 1 < _MaxDeque.size(); i++)
        {
            if (_MaxDeque[i] >= _MaxDeque[i + 1])
            {
                std::swap(_MaxDeque[i], _MaxDeque[i + 1]);
            }
        }
    }
    SortMaxDeque();
}
void PmergeMe::FillContainerDeque(int argc, char **argv)
{
    (void)argv;

    _nb = argc - 1;
    if (_nb % 2 == 0)
    {
        for (int i = 0; i < (int)_Deque.size(); i += 2)
        {
            _PairDeque.push_back(std::make_pair(_Deque[i], _Deque[i + 1]));
        }
    }
    else
    {
        _unpairDeque = true;
        _nbUnpairDeque = _Deque[_Deque.size() - 1];
        _Vector.pop_back();

        for (int i = 0; i < (int)_Vector.size(); i += 2)
        {
            _PairDeque.push_back(std::make_pair(_Deque[i], _Deque[i + 1]));
        }
    }

    for (size_t i = 0; i < _PairDeque.size(); i++)
    {
        if (_PairDeque[i].first < _PairDeque[i].second)
        {
            _MinDeque.push_back(_PairDeque[i].first);
            _MaxDeque.push_back(_PairDeque[i].second);
        }
        else
        {
            _MinDeque.push_back(_PairDeque[i].second);
            _MaxDeque.push_back(_PairDeque[i].first);
        }
    }

    if (_unpairDeque == true)
        _MinDeque.push_back(_nbUnpairDeque);
}
/* Vector */

void PmergeMe::DichoInsertVector()
{
    size_t i = 0;

    while (i < _MinVector.size())
    {
        size_t moit = _MaxVector.size() / 2;
        if (_MaxVector[moit] > _MinVector[i])
        {
            while (moit > 0)
            {
                if (_MaxVector[moit - 1] < _MinVector[i])
                {
                    _MaxVector.insert(_MaxVector.begin() + moit, _MinVector[i]);
                    break;
                }
                moit--;
            }
            if (moit == 0)
            {
                _MaxVector.insert(_MaxVector.begin(), _MinVector[i]);
            }
        }
        else
        {
            while (moit < _MaxVector.size())
            {
                if (_MaxVector[moit] >= _MinVector[i])
                {
                    _MaxVector.insert(_MaxVector.begin() + moit, _MinVector[i]);
                    break;
                }
                moit++;
            }
            if (moit == _MaxVector.size())
            {
                _MaxVector.insert(_MaxVector.end(), _MinVector[i]);
            }
        }
        i++;
    }
}

bool PmergeMe::isSortedVector(const std::vector<int> &vec)
{
    for (size_t i = 1; i < vec.size(); ++i)
    {
        if (vec[i - 1] > vec[i])
        {
            return false;
        }
    }
    return true;
}
void PmergeMe::SortMaxVector()
{
    if (_MaxVector.size() <= 1 || isSortedVector(_MaxVector))
        return;
    else
    {
        for (size_t i = 0; i + 1 < _MaxVector.size(); i++)
        {
            if (_MaxVector[i] > _MaxVector[i + 1])
            {
                std::swap(_MaxVector[i], _MaxVector[i + 1]);
            }
        }
    }
    SortMaxVector();
}

void PmergeMe::FillContainerVector(int argc, char **argv)
{
    (void)argv;

    _nb = argc - 1;
    if (_nb % 2 == 0)
    {
        for (int i = 0; i < (int)_Vector.size(); i += 2)
        {
            _PairVector.push_back(std::make_pair(_Vector[i], _Vector[i + 1]));
        }
    }
    else
    {
        _unpairVector = true;
        _nbUnpairVector = _Vector[_Vector.size() - 1];
        _Vector.pop_back();

        for (int i = 0; i < (int)_Vector.size(); i += 2)
        {
            _PairVector.push_back(std::make_pair(_Vector[i], _Vector[i + 1]));
        }
    }

    for (size_t i = 0; i < _PairVector.size(); i++)
    {
        if (_PairVector[i].first < _PairVector[i].second)
        {
            _MinVector.push_back(_PairVector[i].first);
            _MaxVector.push_back(_PairVector[i].second);
        }
        else
        {
            _MinVector.push_back(_PairVector[i].second);
            _MaxVector.push_back(_PairVector[i].first);
        }
    }

    if (_unpairVector == true)
        _MinVector.push_back(_nbUnpairVector);
}

/*  Start  */

void PmergeMe::RunProgramm(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
                throw PmergeMe::BadArgument();
            j++;
        }
        char *end;
        long num = std::strtol(argv[i], &end, 10);

        if (*end != '\0' || num > INT_MAX || num < 0)
            throw PmergeMe::BadArgument();

        i++;
    }
    i = 1;
    while (i < argc)
    {
        _Vector.push_back(atoi(argv[i]));
        _Deque.push_back(atoi(argv[i]));
        i++;
    }

    struct timeval stopVector, startVector;
    gettimeofday(&startVector, NULL);
    FillContainerVector(argc, argv);
    SortMaxVector();
    DichoInsertVector();
    gettimeofday(&stopVector, NULL);
    std::cout << "Vector : ";
    for (size_t i = 0; i < _MaxVector.size(); i++)
    {
        std::cout << _MaxVector[i] << " ";
    }
    std::cout << std::endl;

    struct timeval stopDeque, startDeque;
    gettimeofday(&startDeque, NULL);
    FillContainerDeque(argc, argv);
    SortMaxDeque();
    DichoInsertDeque();
     gettimeofday(&stopDeque, NULL);
    std::cout << "Deque : ";
    for (size_t i = 0; i < _MaxDeque.size(); i++)
    {
        std::cout << _MaxDeque[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << (stopVector.tv_sec - startVector.tv_sec) * 1000000 + stopVector.tv_usec - startVector.tv_usec << " us" << std::endl;
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << (stopDeque.tv_sec - startDeque.tv_sec) * 1000000 + stopDeque.tv_usec - startDeque.tv_usec << " us" << std::endl;
}
