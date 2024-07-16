/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:13:49 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 17:42:48 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(Brain const &cpy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
    *this = cpy;
}

Brain &Brain::operator=(Brain const &rhs)
{
	for(int i = 0; i < 100; i++)
	{
    	this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}



