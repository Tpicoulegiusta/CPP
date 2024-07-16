/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:54:02 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/12 16:38:52 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
    this->_n_integer = N;
}

Span &Span::operator=(Span const &rhs)
{
    (void) rhs;
    return (*this);
}

Span::Span(Span const &cpy)
{
    *this = cpy;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if(this->monvecteur.size() <= this->_n_integer)
    {
        this->monvecteur.push_back(number);
    std::cout << "Wow vous venez d'ajouter un nombre la non ???" << std::endl;
    for (size_t i = 0; i < monvecteur.size(); ++i)
    {
         std::cout << monvecteur[i] << " ";
    }
    std::cout << std::endl;
    }
    else
        throw std::length_error("Size problem");
}

int Span::shortestSpan()
{
    int j;

    sort(monvecteur.begin(), monvecteur.end());
    std::vector<int>::iterator it = monvecteur.begin();
    if (it + 1 != monvecteur.end())
        j = *(it + 1) - *it;
    for(; it != monvecteur.end(); it++)
    {
        if (it + 1 != monvecteur.end())
        {
            std::cout << *(it + 1) << " " ;
            std::cout << *it << std::endl;
            int nb = *(it + 1) - *it;
            if (nb < j)
                j = nb;
        }
    }
    std::cout << "Petit message apres le trie du vecteur" << std::endl;
    for (size_t i = 0; i < monvecteur.size(); ++i)
    {
         std::cout << monvecteur[i] << " ";
    }
    std::cout << std::endl;
    return (j);
}

int Span::longestSpan()
{
    int j;
    sort(monvecteur.begin(), monvecteur.end());
    std::vector<int>::iterator beg = monvecteur.begin();
    std::vector<int>::iterator end = monvecteur.end();
    j = *(end - 1) - *beg;
    std::cout << "Petit message apres le trie du vecteur" << std::endl;
    for (size_t i = 0; i < monvecteur.size(); ++i)
    {
         std::cout << monvecteur[i] << " ";
    }
    std::cout << std::endl;
    return (j);
}

void Span::addNumber(std::vector<int>::iterator it_first, std::vector<int>::iterator it_last)
{
    for(std::vector<int>::iterator i = it_first; i != it_last; i++)
    {
        this->addNumber(*i);
    }
}


