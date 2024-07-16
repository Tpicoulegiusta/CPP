/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:15:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 17:42:34 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->_type = "default_type";
    std::cout << "Default constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(std::string type_name)
{
    this->_type = type_name;
    std::cout << "Default constructor_2 called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

AAnimal::AAnimal(AAnimal const &cpy)
{
	*this = cpy;
}


std::string AAnimal::getType() const
{
    return (this->_type);
}

void AAnimal::makeSound() const
{
    std::cout << "Default sound" << std::endl;
}

