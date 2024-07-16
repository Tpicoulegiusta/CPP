/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:54:04 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/12 16:20:56 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

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
    void addNumber(std::vector<int>::iterator it_first, std::vector<int>::iterator it_last);
    int shortestSpan();
    int longestSpan();
};

//many_numbers//


