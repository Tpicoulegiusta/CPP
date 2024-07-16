/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:54:02 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/11 16:59:33 by tpicoule         ###   ########.fr       */
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
    return (*this);
}

Span::Span(Span const &cpy)
{
    *this = cpy;
}

Span::~Span()
{
}

{
        addNumber(50);
}

void Span::addNumber(int number)
{
    // try
    // {
        if(this->monvecteur.size() <= this->_n_integer)
        {
            this->monvecteur.push_back(number);
        std::cout << "Wow vous venez d'ajouter un nombre la non ???" << std::endl;
        }
        else
            throw std::length_error("Size problem");
    //}
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
}

int Span::shortestSpan()
{
    
}

int Span::longestSpan()
{

}
