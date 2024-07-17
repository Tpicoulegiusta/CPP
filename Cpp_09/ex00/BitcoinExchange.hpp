/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:50:37 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/17 17:05:18 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <map>

class BitcoinExchange
{
    private:
    std::map<std::string, std::string> _container;
    public:
        BitcoinExchange();
        BitcoinExchange &operator=(BitcoinExchange const &rhs);
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
        void init_container(std::string csv);
};
