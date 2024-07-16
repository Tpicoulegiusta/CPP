/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:47:48 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/07 18:31:02 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main()
{
    std::string input;
    PhoneBook Repertory;
    while (input != "EXIT")
    {
        std::cout << " ADD SEARCH or EXIT ";
        if (!std::getline(std::cin, input, '\n'))
            break ;
     
        if (input == "ADD")
        {
            Repertory.add();
        }
        if (input == "SEARCH")
        {
            if (Repertory.ctc_nbr() == 0)
            {
                std::cout << "No Contact" << std::endl;
                continue;
            }
            std::cout << std::setw(10) << "INDEX";
            std::cout << "|";
            std::cout << std::setw(10) << "FIRSTNAME";
            std::cout << "|";
            std::cout << std::setw(10) << "LASTNAME";
            std::cout << "|";
            std::cout << std::setw(10) << "NICKNAME";
            std::cout << "|";
            std::cout << std::endl;

            for (int i = 0; i < Repertory.ctc_nbr(); i++)
            {
                std::cout << std::setw(10) << i << "|" << std::setw(10) << Repertory.recup_user()[i].access_f().substr(0, 10) << "|";
                std::cout << std::setw(10) << Repertory.recup_user()[i].access_l().substr(0, 10) << "|";
                std::cout << std::setw(10) << Repertory.recup_user()[i].access_n().substr(0, 10) << "|";
                std::cout << std::endl;
            }
            int i;
            bool pol = true;
            std::string ask = Repertory.user_input("ASK FOR INDEX ");
            for(size_t j = 0; j < ask.length(); j++)
            {
                if (!std::isdigit(ask[j]))
                {
                    pol = false;
                    break;
                }
            }
            std::istringstream(ask) >> i;
            if (8 > i && i >= 0 && i < Repertory.ctc_nbr() && pol)
            {
                std::cout << Repertory.recup_user()[i].access_f() << std::endl;
                std::cout << Repertory.recup_user()[i].access_l() << std::endl;
                std::cout << Repertory.recup_user()[i].access_n() << std::endl;
                std::cout << Repertory.recup_user()[i].access_p() << std::endl;
                std::cout << Repertory.recup_user()[i].access_d() << std::endl;
            }
            else
                std::cout << "Rien a declarer" << std::endl;
        }
    }
    std::cout << "bai bai :c" << std::endl;
    return      0;
}
