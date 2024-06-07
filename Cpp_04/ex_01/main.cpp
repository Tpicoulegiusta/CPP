/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:01 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/04 13:46:07 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void	testDeepCopy(void) {
	std::cout << "--- START DEEP COPY TESTING ---" << std::endl;
	Dog	dogA;
	Dog dogB;

	dogA.getBrain()->_ideas[0] = "DogA's Idea";
	dogB.getBrain()->_ideas[0] = "DogB's Idea";

	std::cout << "DISPLAYING DOGS IDEAS AND THEIR ADDRESSES" << std::endl;
	std::cout << "- DogA's idea" << std::endl
				<< " * content: " << dogA.getBrain()->_ideas[0] << std::endl
				<< " * address: " << &dogA.getBrain()->_ideas[0] << std::endl;
	std::cout << "- DogB's idea" << std::endl
				<< " * content: " << dogB.getBrain()->_ideas[0] << std::endl
				<< " * address: " << &dogB.getBrain()->_ideas[0] << std::endl;

	dogA = dogB;
	std::cout << "DOGA SHOULD NOW HAVE DOGB IDEAS" << std::endl;
	std::cout << "- DogA's idea" << std::endl
				<< " * content: " << dogA.getBrain()->_ideas[0] << std::endl
				<< " * address: " << &dogA.getBrain()->_ideas[0] << std::endl;
	std::cout << "- DogB's idea" << std::endl
				<< " * content: " << dogB.getBrain()->_ideas[0] << std::endl
				<< " * address: " << &dogB.getBrain()->_ideas[0] << std::endl;

	std::cout << "EDITING DOGB's IDEA. DOGA SHOULD NOT BE AFFECTED" << std::endl;
	dogB.getBrain()->_ideas[0] = "New DogB's idea";
	std::cout << "- DogA's idea" << std::endl
				<< " * content: " << dogA.getBrain()->_ideas[0] << std::endl
				<< " * address: " << &dogA.getBrain()->_ideas[0] << std::endl;
	std::cout << "- DogB's idea" << std::endl
				<< " * content: " << dogB.getBrain()->_ideas[0] << std::endl
				<< " * address: " << &dogB.getBrain()->_ideas[0] << std::endl;

	std::cout << "--- END DEEP COPY TESTING ---" << std::endl;
}


int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               single test " 			<< std::endl <<
		"------------------------------------------" << std::endl <<

	RESET << std::endl;

	std::cout << GREEN << "----- Construct----- " << RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	delete j;
	delete i;

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"                multi test "	 			<< std::endl <<
	"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Construct----- " << RESET << std::endl;
	const Animal* animals[6] =
	{
		new Dog(), new Dog(), new Dog(),
		new Cat(), new Cat(), new Cat(),
	};

	std::cout << GREEN << "----- MakeSound----- " << RESET << std::endl;
	for (int i =0; i < 6; i++)
		animals[i]->makeSound();

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << i + 1 << std::endl;
		delete animals[i];
	}

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               copy test " 				<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Construct----- " << RESET << std::endl;
	testDeepCopy();

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	return	0;
}
