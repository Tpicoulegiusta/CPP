/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:23:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/16 17:50:22 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
        std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}

Fixed::Fixed(const int c_int)
{
    std::cout << "Int constructor called" << std::endl;
	this->value = c_int << this->bits;
}

Fixed::Fixed(const float c_float)
{
    std::cout << "Float constructor called" << std::endl;
	this->value = roundf((c_float *(1 << this->bits)));
}

float Fixed::toFloat(void) const
{
	return(static_cast<float>(this->value) / static_cast<float>(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}
