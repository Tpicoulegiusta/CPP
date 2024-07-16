/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:26:27 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/28 14:57:15 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
    this->_ctc_nbr = 0;
}

PhoneBook::~PhoneBook()
{

}

Contact* PhoneBook::recup_user()
{
    return(this->_Contact);
}

std::string PhoneBook::user_input(std::string str)
{
    std::string data;

    while (data.empty())
    {
        std::cout << str;
        if (!std::getline(std::cin, data, '\n'))
        {
            std::cout << std::endl;
            return ("");
        }
    }
    return (data);
}

void    PhoneBook::add()
{
    std::string firstname = user_input(" Donne moi ton prenom la dessuite ");
    this->_Contact[this->_index].set_f(firstname);
    std::string lastname = user_input(" Donne moi ton nom la dessuite ");
    this->_Contact[this->_index].set_l(lastname);
    std::string nickname = user_input(" Donne moi ton pseudo la dessuite ");
    this->_Contact[this->_index].set_n(nickname);
    std::string phonenumber = user_input(" Donne moi ton numero de tel bebe ");
    this->_Contact[this->_index].set_p(phonenumber);
    std::string darkestsecret = user_input(" Donne moi ton pire secret ");
    this->_Contact[this->_index].set_d(darkestsecret);
    this->_index++;
    if(this->_ctc_nbr < 2)
        this->_ctc_nbr++;
    if (this->_index == 2)
        this->_index = 0;
}

int PhoneBook::ctc_nbr()
{
    return (this->_ctc_nbr);
}
