/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/16 18:56:04 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	pedro("Pedro");
	ClapTrap	alexandre("Alexandre");

	/** Pedro attacks Alexandre */
	std::cout << "Pedro attacks Alexandre" << std::endl;
	pedro.attack("Alexandre");
	alexandre.takeDamage(5);
	/** Alexandre's healing */
	std::cout << "Alexandre's healing" << std::endl;
	alexandre.beRepaired(10);
    /** Alexandre's maxing his healing */
    for (int i = 0; i < 10; i++) {
        alexandre.beRepaired(10);
    }
	/** Alexandre attacks Pedro */
	std::cout << "Alexandre attacks Pedro" << std::endl;
	alexandre.attack("Pedro");
	pedro.takeDamage(5);
	/** Pedro's emptying all his energy */
	std::cout << "Pedro's angry and emptying his energy" << std::endl;
	for (int i = 0; i < 9; i++) {
		pedro.attack("Alexandre");
		alexandre.takeDamage(1);
	}
	/** Pedro is trying to kill Alexandre */
	std::cout << "Pedro tries to finish off Alexandre" << std::endl;
	pedro.attack("Alexandre");
	/** Alexandre finishes off Pedro */
	std::cout << "Alexandre finishes off Pedro" << std::endl;
	alexandre.attack("Pedro");
	pedro.takeDamage(20);

	std::cout << "Battle is over!" << std::endl;
	return (0);
}
