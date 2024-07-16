/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:45:26 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/07 17:39:08 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
    this->_name = "Bizon";
}

Zombie::~Zombie()
{
    
}


void Zombie::announce()
{
    std::cout << this->_name << std::endl;
    
}

void Zombie::change_name(std::string name)
{
    this->_name = name;
}
