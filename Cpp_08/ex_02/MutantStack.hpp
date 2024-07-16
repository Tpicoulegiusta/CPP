/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:22:55 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/16 15:03:46 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stack>
#include <iterator>
#include <stack>
#include <deque>
#include <algorithm>
#include <iterator>
#include <list>

#define BRED	"\033[1;31m"
#define BGRN	"\033[1;32m"
#define BYEL	"\033[1;33m"
#define BBLU	"\033[1;34m"
#define BMAG	"\033[1;35m"
#define BCYN	"\033[1;36m"
#define BWHT	"\033[1;37m"
#define CRESET	"\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>(){};
		MutantStack(const MutantStack &cpy) : std::stack<T>(cpy){};
        MutantStack &operator=(MutantStack const &rhs)
        {
            std::stack<T>::operator=(rhs);
            return (*this);
        }
        ~MutantStack()
        {}
        typedef typename std::deque<T>::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};
