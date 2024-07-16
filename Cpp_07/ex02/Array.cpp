/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:06:19 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 16:16:56 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array()
{
}

Array::~Array()
{
}

Array::Array(unsigned int n)
{
    n = 3;
}

Array::Array(Array const &cpy)
{
    *this = cpy;
}

Array &Array::operator=(Array const &rhs)
{
    
    return (*this);
}

int Array::size()
{
    
}


