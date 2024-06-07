/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:22:40 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/31 15:33:57 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED
#include <string>
#include <iostream>
#include <cmath>

# define BRED	"\033[1;31m"
# define BGRN	"\033[1;32m"
# define BYEL	"\033[1;33m"
# define BBLU	"\033[1;34m"
# define BMAG	"\033[1;35m"
# define BCYN	"\033[1;36m"
# define BWHT	"\033[1;37m"
# define CRESET	"\033[0m"

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
    bool operator<(Fixed const &rhs) const;
    bool operator>(Fixed const &rhs) const;
    bool operator<=(Fixed const &rhs) const;
    bool operator>=(Fixed const &rhs) const;
    bool operator==(Fixed const &rhs) const;
    bool operator!=(Fixed const &rhs) const;
    Fixed operator+(Fixed const &rhs);
    Fixed operator-(Fixed const &rhs);
    Fixed operator*(Fixed const &rhs);
    Fixed operator/(Fixed const &rhs);
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    static Fixed &min(Fixed &val1, Fixed &val2);
    static const Fixed &min(const Fixed &val1, const Fixed &val2);
    static Fixed &max(Fixed &val1, Fixed &val2);
    static const Fixed &max(const Fixed &val1, const Fixed &val2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& rhs);

#endif
