/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:06:45 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/19 13:07:06 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER
#include <string>
#include <iostream>
#include <climits>
#include <cstring>
#include <iomanip>

class ScalarConverter
{
private:
public:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter &operator=(ScalarConverter const &rhs);
    ScalarConverter(ScalarConverter const &cpy);
    static int convert(std::string str);
    static int is_char(std::string str);
    static int is_int(std::string str);
    static int is_float(std::string str);
    static int is_double(std::string str);
    static char convert_to_char(std::string str);

};




#endif

