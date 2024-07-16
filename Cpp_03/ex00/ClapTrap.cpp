/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:04 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/16 18:57:57 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_Name = "Ivan";
    this->_Hit_points = 10;
    this->_Energy_points = 10;
    this->_Attack_damage = 0; 
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->_Name = Name;
    this->_Hit_points = 10;
    this->_Energy_points = 10;
    this->_Attack_damage = 0; 
    std::cout << "Other Constructor called" << std::endl;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    this->_Name = rhs._Name;
    this->_Hit_points = rhs._Hit_points;
    this->_Energy_points = rhs._Energy_points;
    this->_Attack_damage = rhs._Attack_damage;
    return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
    *this = cpy;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_Hit_points <= 0 || this->_Energy_points <= 0)
        return ;
    else
    {
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_Attack_damage << " points of damage ! " << std::endl;
        this->_Energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points <= 0)
	{
		std::cout << this->_Name << " is dead " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " took " << amount << " damages " << std::endl;
	this->_Hit_points -= amount;
	if (this->_Hit_points < 0)
	{
		this->_Hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "No energy or hit points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " is repaired by " << amount << " points " << std::endl;
	this->_Hit_points += amount;
	this->_Energy_points--;
}



