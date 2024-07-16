/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:18 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/18 14:27:10 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"
#include <exception>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void	testShruberry(void) {
	std::cout << "\n>>> RUNNING SHRUBERRY-CREATION TESTS\n" << std::endl;
	/* Creating needed bureau */
	Bureaucrat	goodBureau("Good Bureau", 136);
	Bureaucrat	badSignBureau("Bad Sign Bureau", 146);
	Bureaucrat	badExecBureau("Bad Exec Bureau", 138);
	
	/* Testing good bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Good bureau will try to sign and execute the form." << std::endl;
		ShrubberyCreationForm	form("goodForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		goodBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		goodBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Testing bad sign bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Bad sign bureau will try to sign and execute the form." << std::endl;
		ShrubberyCreationForm	form("badSignForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		badSignBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		badSignBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	
	/* Testing bad exec bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Bad exec bureau will try to sign and execute the form." << std::endl;
		ShrubberyCreationForm	form("badExecForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		badExecBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		badExecBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << "-------" << std::endl;
	std::cout << "[!] ShruberryCreation tests are done." << std::endl;
}

void	testRobotomy(void) {
	std::cout << "\n>>> RUNNING ROBOTOMY-REQUEST TESTS\n" << std::endl;
	/* Creating needed bureau */
	Bureaucrat	goodBureau("Good Bureau", 45);
	Bureaucrat	badSignBureau("Bad Sign Bureau", 73);
	Bureaucrat	badExecBureau("Bad Exec Bureau", 46);
	
	/* Testing good bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Good bureau will try to sign and execute the form." << std::endl;
		RobotomyRequestForm	form("goodForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		goodBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		goodBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Testing bad sign bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Bad sign bureau will try to sign and execute the form." << std::endl;
		RobotomyRequestForm	form("badSignForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		badSignBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		badSignBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	
	/* Testing bad exec bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Bad exec bureau will try to sign and execute the form." << std::endl;
		RobotomyRequestForm	form("badExecForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		badExecBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		badExecBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << "-------" << std::endl;
	std::cout << "[!] RobotomyRequest tests are done." << std::endl;
}

void	testPresidential(void) {
	std::cout << "\n>>> RUNNING PRESIDENTIAL-PARDON TESTS\n" << std::endl;
	/* Creating needed bureau */
	Bureaucrat	goodBureau("Good Bureau", 1);
	Bureaucrat	badSignBureau("Bad Sign Bureau", 26);
	Bureaucrat	badExecBureau("Bad Exec Bureau", 6);
	
	/* Testing good bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Good bureau will try to sign and execute the form." << std::endl;
		PresidentialPardonForm	form("goodForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		goodBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		goodBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Testing bad sign bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Bad sign bureau will try to sign and execute the form." << std::endl;
		PresidentialPardonForm	form("badSignForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		badSignBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		badSignBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}
	
	/* Testing bad exec bureau */
	std::cout << "-------" << std::endl;
	try {
		std::cout << "[!] Bad exec bureau will try to sign and execute the form." << std::endl;
		PresidentialPardonForm	form("badExecForm");

		std::cout << "-- TRYING TO SIGN FORM" << std::endl;
		badExecBureau.signForm(form);
		std::cout << "-- TRYING TO EXECUTE FORM" << std::endl;
		badExecBureau.executeForm(form);
	} catch (std::exception	&exception) {
		std::cout << "[Form] " "Exception caught!" << std::endl;
		std::cout << exception.what() << std::endl;
	}

	/* Tests done */
	std::cout << "-------" << std::endl;
	std::cout << "[!] PresidentialPardon tests are done." << std::endl;
}

int	main(void)
{
	testShruberry();
	testRobotomy();
	testPresidential();

	// Tests are done
	std::cout << "All tests completed. Want to check for leaks? Run 'make debug'" << std::endl;
	return (0);
}
