/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/03 15:15:10 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	pedro("Pedro");
	ScavTrap	tommi("Tommi");

	/** Pedro attacks himself and suggests a high fives */
	pedro.attack("himself");
	pedro.takeDamage(30);
	pedro.highFivesGuys();
	/** Tommi kills Pedro and enters gate keeper mode */
	for (int i = 0; i < 4; i++) {
		tommi.attack("Pedro");
		pedro.takeDamage(20);
	}
	tommi.guardGate();

	std::cout << "Battle is over!" << std::endl;

	// Tests are done
	std::cout << "All tests completed." << std::endl;
	return (0);
}
