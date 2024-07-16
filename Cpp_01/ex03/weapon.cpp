/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:58 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/08 16:55:34 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "weapon.hpp"

Weapon::Weapon()
{
    this-> _type = "";
}

Weapon::~Weapon()
{

}
std::string const Weapon::getType()
{
    std::string &_scnd_type = this->_type;
    return(_scnd_type);
}

void Weapon::setType(std::string str)
{
    this->_type = str;
}
