/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:28:20 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/26 17:47:14 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
    if (argc == 2)
        return (ScalarConverter::convert(argv[1]));
    else 
        return (1);
    return (0);
}
