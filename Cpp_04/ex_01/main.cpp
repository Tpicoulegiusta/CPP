/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:01 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 17:24:25 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// int main ()
// {
// 	Animal *Zoo[6] = {new Dog(), new Dog(), new Dog(), 
// 						new Cat(), new Cat(), new Cat()};

	
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
	
// 	delete j;//should not create a leak
// 	delete i;
// 	for(int i = 0; i != 6; i++)
// 	{
// 		delete(Zoo[i]);
// 	}

// 	return (0);
// }

void	testDeepCopy(void) {
	std::cout << "--- Dog's behavior ---" << std::endl;
	Dog	dogA;
	Dog dogB;

	std::cout << "-------" << std::endl;
	dogA.getBrain()->_ideas[0] = "DogA's idea";
	dogB.getBrain()->_ideas[0] = "DogB's idea";
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << dogA.getBrain()->_ideas[0] << " (" << &dogA.getBrain()->_ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << dogB.getBrain()->_ideas[0] <<" (" << &dogB.getBrain()->_ideas[0] << ")" << std::endl;

	std::cout << "-------" << std::endl;
	dogB = dogA;
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << dogA.getBrain()->_ideas[0] << " (" << &dogA.getBrain()->_ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << dogB.getBrain()->_ideas[0] <<" (" << &dogB.getBrain()->_ideas[0] << ")" << std::endl;

	std::cout << "--- Cat's behavior ---" << std::endl;
	Cat	catA;
	Cat catB;

	std::cout << "-------" << std::endl;
	catA.getBrain()->_ideas[0] = "CatA's idea";
	catB.getBrain()->_ideas[0] = "CatB's idea";
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << catA.getBrain()->_ideas[0] << " (" << &catA.getBrain()->_ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << catB.getBrain()->_ideas[0] <<" (" << &catB.getBrain()->_ideas[0] << ")" << std::endl;

	std::cout << "-------" << std::endl;
	catB = catA;
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << catA.getBrain()->_ideas[0] << " (" << &catA.getBrain()->_ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]'s address=" << catB.getBrain()->_ideas[0] <<" (" << &catB.getBrain()->_ideas[0] << ")" << std::endl;
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
