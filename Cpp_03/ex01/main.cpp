/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/17 16:32:33 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	pedro("Pedro");

	/** Pedro attacks himself */
	pedro.attack("himself");
	pedro.takeDamage(20);
	pedro.guardGate();
	pedro.beRepaired(20);

	//std::cout << "Battle is over!" << std::endl;

	// Tests are done
	//std::cout << "All tests completed. Want to check for leaks? Run 'make debug'" << std::endl;
	return (0);
}
