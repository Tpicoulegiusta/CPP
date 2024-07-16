/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:48:29 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/04 13:50:01 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->_b_ideas = new Brain;
	for(int i = 0; i < 100; i++)
	{
		this->_b_ideas->_ideas[i] = "Cat's brain idea";
	}
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete(this->_b_ideas);
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Default Cat constructor 2 called" << std::endl;
    this->_b_ideas = new Brain;
}
Cat &Cat::operator=(Cat const &rhs)
{
    delete(this->_b_ideas);
    this->_b_ideas = new Brain(*rhs._b_ideas);
    Animal::operator=(rhs);
    return (*this);
}

Cat::Cat(Cat const &cpy) : Animal(cpy)
{
    std::cout << "Copy Cat constructor called" << std::endl;
    this->_b_ideas = new Brain(*cpy._b_ideas);
}

void Cat::makeSound() const
{
    std::cout << "MEEEEEEEOOWWWW" << std::endl;
}

Brain   *Cat::getBrain() {
    return (this->_b_ideas);
}
