/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:50:50 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/06 17:02:53 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>
#include <iostream>
#include <fstream>
#include <cstdlib>

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    this->_container = rhs._container;
    return (*this);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy)
{
    *this = cpy;
}

BitcoinExchange::~BitcoinExchange()
{
    
}


float BitcoinExchange::ft_stof(std::string str)
{
	float f;

	std::istringstream(str) >> f;
	return f;
}


bool BitcoinExchange::parse_date(std::string date, std::string line_txt)
{
    int years = atoi(date.substr(0, 4).c_str());
    int months = atoi(date.substr(5, 2).c_str());
    int days = atoi(date.substr(8, 2).c_str());
	int	days_of_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (!(date.length() == 10 + 1)) // 11 pour les moins malins -_-'//
    {
        std::cout << "Bad Format ====> " << line_txt << std::endl;
        return (1);
    }
    if(date[4] != '-' || date[7] != '-' || date[10] != ' ')
    {
        std::cout << "Bad Format ====> " << line_txt << std::endl;
        return (1);
    }
    if(2008 < years && years > 2024)
    {
        std::cout << "Bad Format ====> " << line_txt << std::endl;
        return (1);
    }
    if (1 < months && months > 12)
    {
        std::cout << "Bad Format ====> " << line_txt << std::endl;
        return (1);
    }
    if (days < 1 || days > days_of_months[months - 1])
    {
		std::cerr << "Error: bad date format (day) => " << line_txt << std::endl;
		return 1;
    }
    if (years == 2008 && (months < 10 || days <31))
    {
        std::cerr << "Error : bad date format (btc not created) => " << line_txt << std::endl;
        return (1);
    }
    for (int i = 0; date[i]; i++)
    {
        if(i == 4 || i == 7 || i == 10)
            continue;
        if(!isdigit(date[i]))
        {
            std::cerr << "Error : bad input => " << line_txt << std::endl;
            return(1);
        }
    }
    return (0);
}


bool BitcoinExchange::parse_value(std::string value, std::string line_txt)
{   
    int dot = 0;
    if(value.empty())
    {
        std::cerr << "Eroor: bad input value => " << line_txt << std::endl;
        return (1);
    }
    for(size_t i = 1; i < value.length(); i++)
    {
        if(value[i] == '.')
        {
            dot++;
            if(dot > 1)
            {
                std::cerr << "Eroor: bad input value => " << line_txt << std::endl;
                return (1);
            }
        }
        else if(!isdigit(value[i]))
        {
            std::cerr << "Eroor: bad input value => " << line_txt << std::endl;
            return (1);
        }
    }
    return (0);
}


void BitcoinExchange::init_container(std::string csv)
{
    std::ifstream file(csv.c_str()); // stock argv[1] nomme file dans une sorte de container //

    if (file.is_open())
    {
        std::string line;
        while(std::getline(file, line))
        {
            if(line == "date,exchange_rate")
                continue;
            std::stringstream ss(line); // stream pour parser la ligne //
            std::string cle; // date //
            std::string valeur; // valeur //
            if (std::getline(ss, cle, ',') && std::getline(ss, valeur))
                this->_container[cle] = ft_stof(valeur);
            else
            {
                std::cerr << "Erreur : Format de ligne invalide." << std::endl;
                continue;
            }
        }
        file.close();
    }
    else
        std::cerr << "Erreur: impossible d'ouvrir le sexfault" << std::endl;
}

float BitcoinExchange::wallet_v(std::string date)
{
    std::map<std::string, float>::iterator it = this->_container.lower_bound(date);
    if(date != it->first && it != this->_container.begin())
        it--;
    if (it == this->_container.end())
        it--;
    return(it->second);
}

void BitcoinExchange::parsing(char *argument)
{
    std::ifstream file_txt(argument);
    std::string line_txt;
    if(file_txt.is_open())
    {
        while(getline(file_txt, line_txt))
        {
            if(line_txt == "date | value")
                continue;
            std::stringstream ss(line_txt);
            std::string date;
            std::string value;
            if (getline(ss, date, '|') && getline(ss, value))
            {
                if(parse_date(date, line_txt))
                    continue;
                if(parse_value(value, line_txt))
                    continue;
                float f_value = ft_stof(value);
                
                if((int)f_value > INT_MAX)
                {
                    std::cout << "Error: Bad input => " << line_txt << std::endl;
                    return;
                }
                float wallet_value = wallet_v(date);
			    std::cout << date << "=>" << value << " = " << (wallet_value * f_value) << std::endl;
            }
            else
            {
                std::cout << "Error: Bad input => " << line_txt << std::endl;
                continue;
            }
        }
    }
    else
    {
        std::cerr << "Erreur: File_txt problem" << std::endl;
        return ;
    }
}

