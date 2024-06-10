/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:18 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/10 16:40:35 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"
#include <exception>

void	testExceptions(void) {
	std::cout << "\n>>> RUNNING EXCEPTION TESTS\n" << std::endl;
	/* Creating a Form with a too high sign grade */
	std::cout << "[!] Testing exceptions on sign grade." << std::endl;
	try {
		Form	dummy("Dummy", 0, 1);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Creating a Form with a too low sign grade */
	try {
		Form	dummy("Dummy", 151, 1);
	} catch (std::exception &exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Creating a Form with a too high exec grade */
	std::cout <<  "-------" << std::endl;
	std::cout << "[!] Testing exceptions on exec grade." << std::endl;
	try {
		Form	dummy("Dummy", 1, 0);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Creating a Form with a too low exec grade */
	try {
		Form	dummy("Dummy", 1, 151);
	} catch (std::exception &exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << "-------" << std::endl;
	std::cout << "[!] Exceptions tests are done." << std::endl;
}

void	testSign(void) {
	std::cout << "\n>>> RUNNING FORM SIGNING TESTS\n" << std::endl;
	Form	dummyForm("Dummy Form", 21, 1); // Required grade from 1 to 21 included
	/* Bureaucrat is signing with a too low grade */
	Bureaucrat	badBureaucrat("Bad Bureaucrat", 22);
	badBureaucrat.signForm(dummyForm);
	/* Bureaucrat is signing with a required grade */
	Bureaucrat	goodBureaucrat("Good Bureaucrat", 21);
	goodBureaucrat.signForm(dummyForm);
}

void	testGetters(void) {
	std::cout << "\n>>> RUNNING GETTERS TESTS\n" << std::endl;
	/* Getting attributes */
	Form	dummy("Dummy", 42, 1);

	std::cout << "What's your name? " << dummy.getName() << std::endl;
	std::cout << "Are you signed? " << (!dummy.getValid() ? "no" : "yes") << std::endl;
	std::cout << "What's your required sign grade? " << dummy.getGrade_sign() << std::endl;
	std::cout << "What's your required exec grade? " << dummy.getGrade_exec() << std::endl;
}

void	testStreamInsertion(void) {
	std::cout << "\n>>> RUNNING STREAM INSERT TESTS\n" << std::endl;
	/* Calling operator << */
	Form	dummy("Dummy", 21, 1);
	
	std::cout << dummy << std::endl;
}

int	main(void)
{
	testExceptions();
	testSign();
	testGetters();
	testStreamInsertion();

	// Tests are done
	return (0);
}
