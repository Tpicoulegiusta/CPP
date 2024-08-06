/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:50:37 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/06 16:56:50 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <stdio.h>
#include <limits.h>
#include <limits>

class BitcoinExchange
{
    private:
    std::map<std::string, float> _container;
    public:
        BitcoinExchange();
        BitcoinExchange &operator=(BitcoinExchange const &rhs);
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
        void init_container(std::string csv);
        void parsing(char *argument);
        bool parse_date(std::string date, std::string line_txt);
        bool parse_value(std::string value, std::string line_txt);
        float ft_stof(std::string str);
        float wallet_v(std::string date);

        
};
