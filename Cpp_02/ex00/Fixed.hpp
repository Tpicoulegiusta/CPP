/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:43:56 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/14 16:34:46 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANONIC
# define CANONIC
#include "string"
#include "iostream"

class Fixed
{
private:
    int value;
	static const int bits = 8;
public:
    Fixed();
    ~Fixed();
	Fixed(const Fixed &cpy);
	Fixed& operator=(const Fixed &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};



#endif
