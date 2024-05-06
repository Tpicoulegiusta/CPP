/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:22:04 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/06 17:12:46 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->_firstname = "";
    this->_darkestsecret = "";
    this->_lastname = "";
    this->_nickname = "";
    this->_phonenumber = "";
}

Contact::~Contact()
{
}

std::string Contact::access_f()
{
    return(this->_firstname);
}

std::string Contact::access_l()
{
    return(this->_lastname);
}

std::string Contact::access_n()
{
    return(this->_nickname);
}

std::string Contact::access_p()
{
    return(this->_phonenumber);
}

std::string Contact::access_d()
{
    return(this->_darkestsecret);
}

void    Contact::set_f(std::string str)
{
    this->_firstname = str;
}

void    Contact::set_l(std::string str)
{
    this->_lastname = str;
}

void    Contact::set_n(std::string str)
{
    this->_nickname = str;
}

void    Contact::set_p(std::string str)
{
    this->_phonenumber = str;
}

void    Contact::set_d(std::string str)
{
    this->_darkestsecret = str;
}
