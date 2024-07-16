/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:43 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/09 15:11:41 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "weapon.hpp"

HumanA::HumanA(std::string name, Weapon &sabre) : _name(name), _sabre(sabre)
{
}

HumanA::~HumanA()
{
}

std::string HumanA::get_name()
{
    return (this->_name);
}

void HumanA::attack()
{
    std::cout << get_name();
    std::cout << " attacks with their ";
    std::cout << this->_sabre.getType() << std::endl;
}
