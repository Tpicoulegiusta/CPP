/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:45:26 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 12:04:22 by tpicoule         ###   ########.fr       */
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
    std::cout << this->_name << ": destructor called" << std::endl;
}


void Zombie::announce()
{
    std::cout << this->_name << std::endl;
}

void Zombie::change_name(std::string name)
{
    this->_name = name;
}
