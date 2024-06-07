/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/03 15:07:51 by tpicoule         ###   ########.fr       */
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
	//std::cout << "All tests completed." << std::endl;	
	ScavTrap	one("one");
	ScavTrap	two("two");
	ScavTrap	defaultTrap;

	one.guardGate(); // guard gate
	one.attack("two"); // attack
	two.takeDamage(10); // take damage
	two.attack("one"); // attack
	one.takeDamage(10); // take damage
	one.attack("default"); // attack
	defaultTrap.takeDamage(10); // take damage
	one.takeDamage(50); // take damage
	one.beRepaired(20); // be repaired
	one.takeDamage(50); // take damage
	one.takeDamage(10); // take damage and die
	one.takeDamage(10); // is dead and cannot take damage
	one.beRepaired(10); // is dead and cannot be repaired
	one.attack("two"); // is dead and cannot attack
	for (int i = 0; i < 47; i++)
		two.attack("one"); // attack 47 times
	two.beRepaired(10); // be repaired
	two.attack("one"); // attack
	two.attack("one"); // no energy points left
	two.beRepaired(10); // no energy points left
	two.guardGate(); // guard gate
	two.takeDamage(100); // take damage and die
	two.takeDamage(10); // is dead and cannot take damage
	two.beRepaired(10); // is dead and cannot be repaired
	two.attack("one"); // is dead and cannot attack
	two.guardGate(); // is dead and cannot guard gate
	return 0;
}
