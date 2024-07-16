/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:01 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/04 12:09:39 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	testSubject(void) {
	std::cout << "\n>>> RUNNNING SUBJECT TESTS\n" << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
}

void	testWrongCat(void) {
	std::cout << "\n>>> RUNNNING WRONGCAT TESTS\n" << std::endl;
	const WrongAnimal*	meta = new WrongAnimal();
	const Animal*		l = new Dog();
	const WrongCat*		k = new WrongCat();

	std::cout << l->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	l->makeSound();
	k->makeSound();
	meta->makeSound();

	delete k;
	delete l;
	delete meta;
}

int	main(void) {
	testSubject();
	testWrongCat();

	// Tests are done
	std::cout << "All tests completed." << std::endl;
	return (0);
}
