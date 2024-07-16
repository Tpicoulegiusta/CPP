/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:28:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/04 12:10:52 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

// Dog::Dog(std::string type) : Animal(type)
// {
//     std::cout << "Default Dog constructor 2 called" << std::endl;
// }

Dog &Dog::operator=(Dog const &rhs)
{
    Animal::operator=(rhs);
    return (*this);
}

Dog::Dog(Dog const &cpy) : Animal(cpy)
{
    std::cout << "Copy Dog constructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WWOOOOOOUUUUUUUAF" << std::endl;
}

