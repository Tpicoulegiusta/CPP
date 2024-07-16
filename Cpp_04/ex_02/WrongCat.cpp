/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:43:38 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 17:10:51 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Wrongcat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrongcat destructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat default constructor_2 called" << std::endl;
}


WrongCat::WrongCat(WrongCat const &cpy) : WrongAnimal(cpy)
{
    std::cout << "Copy constructor WronAnimal cat called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    WrongAnimal::operator=(rhs);
    return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WRRRRROOONNNNG" << std::endl;
}



