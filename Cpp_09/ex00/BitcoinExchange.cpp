/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:50:50 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/18 16:55:31 by tpicoule         ###   ########.fr       */
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
        std::cerr << "Error : bad date format (btc not crreated) => " << line_txt << std::endl;
        return (1);
    }
    
    std::cout << years <<  std::endl;
    std::cout << months << std::endl;
    std::cout << days << std::endl;
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
            {
                this->_container[cle] = valeur;
            }
            else
            {
                std::cerr << "Erreur : Format de ligne invalide." << std::endl;
                continue;
            }
        }
        file.close();
    }
    else
        std::cerr << "Erreur: impossible d'ouvrir le fichier" << std::endl;
    // if (_container.empty())
    // {
    //     std::cout << "Le conteneur est vide." << std::endl;
    //     return;
    // }

    // // Parcourir le conteneur et afficher chaque paire
    // for (std::map<std::string, std::string>::iterator it = _container.begin(); it != _container.end(); ++it)
    //     std::cout << "Date : " << it->first << " Valeur : " << it->second << std::endl;
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
            }
            else
            {
                std::cout << "Bad input: " << line_txt << std::endl;
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


