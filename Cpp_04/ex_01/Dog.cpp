/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:28:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 17:23:27 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default Dog constructor called" << std::endl;
    this->_b_ideas = new Brain;
	for(int i = 0; i < 100; i++)
	{
		this->_b_ideas->_ideas[i] = "Dog's brain idea";
	}
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete(this->_b_ideas);
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Default Dog constructor 2 called" << std::endl;
    this->_b_ideas = new Brain;
}

Dog &Dog::operator=(Dog const &rhs)
{
    delete(this->_b_ideas);
    this->_b_ideas = new Brain(*rhs._b_ideas);
    Animal::operator=(rhs);
    return (*this);
}

Dog::Dog(Dog const &cpy) : Animal(cpy)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    this->_b_ideas = new Brain(*cpy._b_ideas);
    std::cout << "coucou le segfault" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WWOOOOOOUUUUUUUAF" << std::endl;
}

Brain   *Dog::getBrain() {
    return (this->_b_ideas);
}
