/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:38:09 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 15:58:58 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void print(int value)
{
    std::cout << value << std::endl;
}

int main ()
{
    int tab[] = {1, 2, 3, 4, 5};
    int length = 5;
    
    iter(tab, length, print);
    return (0);
}
