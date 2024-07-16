/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:54:04 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/11 16:39:01 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <exception>

class Span
{
private:
    unsigned int _n_integer;
    std::vector<int> monvecteur;
public:
    Span();
    Span(unsigned int N);
    Span &operator=(Span const &rhs);
    Span(Span const &cpy);
    ~Span();
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
};

//many_numbers//


