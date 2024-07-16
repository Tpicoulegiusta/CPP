/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:43 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/08 17:02:45 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "weapon.hpp"

HumanA::HumanA()
{
    this->_name = "Humain";
}

HumanA::~HumanA()
{
}



std::string HumanA::get_name()
{
    return (this->_name);
}

Weapon* HumanA::recup_type()
{
    return (this->_Weapon);
}

void HumanA::attack()
{
    std::cout << get_name();
    std::cout << " attacks with their ";
    std::cout << ;
}
