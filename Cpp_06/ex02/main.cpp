/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:18:54 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 13:53:11 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"


int main ()
{
	Base	*base;

	std::cout << "RUNNING SUBJECT TESTS" << std::endl;
	base = generate();
	identify(base);
	identify(*base);
	delete base;

	std::cout << "All tests completed" << std::endl;
	return (0);
}
