/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:54:08 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/15 11:15:17 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    Span span(15);
    try
    {
        span.addNumber(4);
        span.addNumber(9);
        span.addNumber(11);
        span.addNumber(34);
        span.addNumber(1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Add number de quoi" << std::endl;
    }
    int j = span.shortestSpan();
    std::cout << j << std::endl;
    int k = span.longestSpan();
    std::cout << k << std::endl;
    /////////addNUMBERSSSSSZZZZZSSSSS//////
    std::vector<int> test {1, 3, 7, 12, 34, 45, 56};
    span.addNumber(test.begin(), test.end());
    
    return (0);
}
