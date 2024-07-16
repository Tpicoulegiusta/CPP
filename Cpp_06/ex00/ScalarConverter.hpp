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
#include <cstdlib>
#include <limits.h>
#include <limits>
#include <cctype>
#include <sstream>


class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &cpy);
public:
    ~ScalarConverter();
    ScalarConverter &operator=(ScalarConverter const &rhs);
    static int convert(std::string str);
    static int is_char(std::string str);
    static int is_int(std::string str);
    static int is_float(std::string str);
    static int is_double(std::string str);
    static char convert_to_char(std::string str);
    static int convert_to_int(std::string str);
    static bool check(std::string str);
    static float convert_to_float(std::string str);
    static bool check_float(std::string str);
    static bool check_int_1(std::string str);
    static double convert_to_double(std::string str);
    static int ft_ouinouin(std::string str);





};




#endif

