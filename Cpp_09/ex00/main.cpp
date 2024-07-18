/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:50:06 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/18 14:01:01 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

int main (int argc, char **argv)
{
    (void) argv;
    BitcoinExchange bitcoin;
    if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    bitcoin.init_container("data.csv");
    bitcoin.parsing(argv[1]);
    return (0);
}
