/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:15:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 14:26:46 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "default_type";
    std::cout << "Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(std::string type_name)
{
    this->_type = type_name;
    std::cout << "Default constructor_2 called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

Animal::Animal(Animal const &cpy)
{
	*this = cpy;
}

