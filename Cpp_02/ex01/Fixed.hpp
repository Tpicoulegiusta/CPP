/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:22:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/15 16:35:10 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED
#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const int c_int);
    Fixed(const float c_float);
    Fixed(const Fixed &cpy);
    Fixed &operator=(Fixed const &rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& rhs);



#endif
