/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:51 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 13:17:36 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->couteau = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &canif)
{
    this->couteau = &canif;
}

void    HumanB::attack()
{
    if (!this->couteau)
    {
        std::cout << "no weapon no puedo attackar" << std::endl;
        return ;
    }
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->couteau->getType() << std::endl;
}
