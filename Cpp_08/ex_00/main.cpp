/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:53:30 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/10 14:46:25 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << MAGENTA << "----- TESTING WITH VECTOR -----" << std::endl << RESET;
	std::vector<int> vector;
	std::cout << YELLOW << "Pushing integers into vector container..." << std::endl << RESET;
	vector.push_back(0);
	vector.push_back(2);
	vector.push_back(42);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);
	vector.push_back(6);
	vector.push_back(7);
	std::cout << YELLOW << "Finding number '42' in vector container..." << std::endl << RESET;
	try {
		std::cout << GREEN << "Found number: " << *easyfind(vector, 42) << std::endl << RESET;
		std::cout << GREEN << "Found number (+ 2): " << *(easyfind(vector, 42) += 2) << std::endl << RESET;
	} catch (std::exception &e) {
		std::cout << RED << "Failed easyfind() with catch error: " << e.what() << std::endl << RESET;
	}
	std::cout << std::endl;

	std::cout << MAGENTA << "----- TESTING WITH LIST -----" << std::endl << RESET;
	std::list<int> list;
	std::cout << YELLOW << "Pushing integers into list container..." << std::endl << RESET;
	list.push_back(1);
	list.push_back(0);
	list.push_back(2);
	list.push_back(0);
	list.push_back(42);
	list.push_back(7);
	list.push_back(0);
	list.push_back(4);
	std::cout << YELLOW << "Finding number '42' in list container..." << std::endl << RESET;
	try {
		std::cout << GREEN << "Found number: " << *easyfind(list, 42) << std::endl << RESET;
		std::cout << GREEN << "Found number (+ 1): " << *(++easyfind(list, 42)) << std::endl << RESET;
	} catch (std::exception &e) {
		std::cout << RED << "Failed easyfind() with catch error: " << e.what() << std::endl << RESET;
	}
	return (0);
}
