/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:23:47 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/03 15:12:28 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name, 100, 50, 20)
{
    std::cout << "Default ScavTrap Other_Constructor Named called" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy)
{
    std::cout << "ScavTrap Copy constructor called." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_Hit_points <= 0 || this->_Energy_points <= 0)
        return ;
    else
    {
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << " causing " << this->_Attack_damage << " points of damage ! " << std::endl;
        this->_Energy_points--;
    }
}

