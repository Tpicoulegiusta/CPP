/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:01:58 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 15:43:15 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main ()
{
    int a = 15;
	int b = 4;

	std::cout << "BEFORE SWAP -> a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "AFTER SWAP -> a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << kanye::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "BEFORE SWAP -> c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "AFTER SWAP -> c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return (0);
}
