/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:08:27 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/19 17:56:56 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
    (void) rhs;
    return (*this);
}

ScalarConverter::ScalarConverter(ScalarConverter const &cpy)
{
    *this = cpy;
}

int ScalarConverter::is_char(std::string str)
{
    if (str.length() != 1)
        return (1);
    if (isdigit(str[0]))
        return (1);
    if (str[0] > CHAR_MAX || str[0] < CHAR_MIN)
        return (1);
    return (0);
}

int ScalarConverter::is_int(std::string str)
{       
    size_t i = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        i = 1;
    }
    for(; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
        {
            return (1);
        }
    }
    return (0);
}

int ScalarConverter::is_float(std::string str)
{
    size_t i = 0;
    int flag = 0;
    
    if (str.length() == 2)
    {
        return (1);
    }
    if (str[str.length() - 1] != 'f')
    {
        return (1);
    }
    if (str[i] == '-' || str[i] == '+')
    {
        i = 1;
    }
    for(; i < str.length() - 1; i++)
    {
        if (flag == 0 && str[i] == '.')
        {
            flag++;
            continue;
        }
        if (!isdigit(str[i]))
        {
            return (1);
        }
    }
    return (0);
}

int ScalarConverter::is_double(std::string str)
{
    size_t i = 0;
    int flag = 0;

    if (str[i] == '-' || str[i] == '+')
    {
        i = 1;
    }
    for(; i < str.length(); i++)
    {
        if (flag == 0 && str[i] == '.')
        {
            flag++;
            continue;
        }
        if (!isdigit(str[i]))
        {
            return (1);
        }
    }
    return (0);
}


int ScalarConverter::convert(std::string str)
{
    if (str.empty())
        return (1) ;
    if (is_char(str) == 0)
    {
        std::cout << "ITS A BOY ---> CHAR " << std::endl;
    }
    else if (is_int(str) == 0)
    {
        std::cout << "ITS A BOY ---> INT " << std::endl;
        //ft_convert to int//
    }
    else if (is_float(str) == 0)
    {
        std::cout << "ITS A BOY ---> FLOAT " << std::endl;
        //ft_convert to float//
    }
    else if (is_double(str) == 0)
    {
        std::cout << "ITS A BOY ---> DOUBLE " << std::endl;
        //ft_convert to double//
    }
    return (0);
}



