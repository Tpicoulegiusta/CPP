/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:48:29 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 17:04:23 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Default Cat constructor 2 called" << std::endl;
}
Cat &Cat::operator=(Cat const &rhs)
{
    Animal::operator=(rhs);
    return (*this);
}

Cat::Cat(Cat const &cpy) : Animal(cpy)
{
    std::cout << "Copy Cat constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEEEEEEEOOWWWW" << std::endl;
}

