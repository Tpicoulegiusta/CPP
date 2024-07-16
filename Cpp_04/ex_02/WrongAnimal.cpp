/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:43:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 17:22:24 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "Wrong default constructor_2 called" << std::endl;
    this->_type = type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->_type = rhs._type;
    return(*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
    std::cout << "Copy constructor WronAnimal called" << std::endl;
    *this = cpy;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong sound" << std::endl;
}


std::string WrongAnimal::getType() const
{
    return (this->_type);
}


