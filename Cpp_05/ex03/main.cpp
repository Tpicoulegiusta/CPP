/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:18 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/17 14:38:45 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"
#include <exception>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


void	testExceptions(void) {
	std::cout << "\n>>> RUNNING EXCEPTIONS TESTS\n" << std::endl;
	/* Trying to make an unknown form */
	Intern	someRandomIntern;
	someRandomIntern.makeForm("Unknown form", "Useless");
	/* Tests done */
	std::cout << "-------" << std::endl;
	std::cout << "[!] Exceptions tests are done." << std::endl;
}

void	testValidForms(void) {
	std::cout << "\n>>> RUNNING VALID-FORMS TESTS\n" << std::endl;
	/* Making ShrubberyCreationForm */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Making default_scf_AForm." << std::endl;
		Intern	someRandomIntern;
		AForm	*ref;
		
		ref = someRandomIntern.makeForm("default_scf_AForm", "some target");
		delete ref;
	} catch (std::exception &exception) {
		std::cout << "[Intern] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Making RobotomyRequestForm */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Making default_rrf_AForm." << std::endl;
		Intern	someRandomIntern;
		AForm	*ref;
		
		ref = someRandomIntern.makeForm("default_rrf_AForm", "some target");
		delete ref;
	} catch (std::exception &exception) {
		std::cout << "[Intern] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	/* Making PresidentialPardonForm */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Making default_ppf_AForm." << std::endl;
		Intern	someRandomIntern;
		AForm	*ref;
		
		ref = someRandomIntern.makeForm("default_ppf_AForm", "some target");
		delete ref;
	} catch (std::exception &exception) {
		std::cout << "[Intern] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << "-------" << std::endl;
	std::cout << "[!] Valid tests are done." << std::endl;
}

int	main(void)
{
	testExceptions();
	testValidForms();

	// Tests are done
	std::cout << "All tests completed." << std::endl;
	return (0);
}
