/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:50:50 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/17 17:13:22 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>
#include <iostream>
#include <fstream>

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
            }
        }
        file.close();
    }
    else
        std::cerr << "Erreur: impossible d'ouvrir le fichier" << std::endl;
    if (_container.empty())
    {
        std::cout << "Le conteneur est vide." << std::endl;
        return;
    }

    // Parcourir le conteneur et afficher chaque paire
    for (std::map<std::string, std::string>::iterator it = _container.begin(); it != _container.end(); ++it)
        std::cout << "Date : " << it->first << " Valeur : " << it->second << std::endl;
}
