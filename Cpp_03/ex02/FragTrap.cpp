/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:36:10 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 14:03:18 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Ivan_Frag", 100, 100, 30)
{
    std::cout << "Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "Default FragTrap Other_Constructor Named called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    ClapTrap::operator=(rhs);
    return (*this);
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "HIGH FIVE GUYS!!!" << std::endl;
}

