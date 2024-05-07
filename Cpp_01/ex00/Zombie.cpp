/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:34:03 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/07 15:06:24 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
    this->_name = "name";
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie::~Zombie()
{

}

void Zombie::change_name(std::string name)
{
        this->_name = name;
}
