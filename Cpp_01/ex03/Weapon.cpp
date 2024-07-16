/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:58 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 13:10:56 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

Weapon::Weapon(std::string arme)
{
    this->_type = arme;
}

Weapon::~Weapon()
{

}
std::string const &Weapon::getType() const
{
    return(this->_type);
}

void Weapon::setType(std::string str)
{
    this->_type = str;
}
