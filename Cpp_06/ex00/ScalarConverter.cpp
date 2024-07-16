/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:08:27 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/26 18:14:18 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdint.h>

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

char ScalarConverter::convert_to_char(std::string str)
{
    char str_conv = str[0];
    //je pleure//
    return (str_conv);
}

int ScalarConverter::convert_to_int(std::string str)
{
    int converted = atoi(str.c_str());
    return (converted);
}

bool ScalarConverter::check(std::string str)
{
    long valeur_convertie = atol(str.c_str());
    if (valeur_convertie > INT32_MAX || valeur_convertie < INT32_MIN)
        return (1);
    return (0);
}

float ScalarConverter::convert_to_float(std::string str)
{
    float converted_float = atof(str.c_str());
        //std::cout << converted_float << std::endl;
    return(converted_float);
}

bool ScalarConverter::check_float(std::string str)
{
    double converted_double = atof(str.c_str());
    if (converted_double > std::numeric_limits<float>::max() || converted_double < std::numeric_limits<float>::min())
    {
        //std::cout << converted_double << std::endl;
        return (1);
    }
    return (0);
}

bool ScalarConverter::check_int_1(std::string str)
{
    double converted_double = atof(str.c_str());
    if (converted_double > std::numeric_limits<int>::max() || converted_double < std::numeric_limits<int>::min())
    {
        // std::cout << converted_double << std::endl;
        return (1);
    }
    return (0);
}

double ScalarConverter::convert_to_double(std::string str)
{
    double converted_double;
    std::stringstream ss(str);
    ss >> converted_double;
    return (converted_double);
}

int ScalarConverter::ft_ouinouin(std::string str)
{
    if (str == "-inff")
    {
        std::cout << "char: " <<  "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: "  << "-inff" << std::endl;
        std::cout << "double: " << "-inf" << std::endl;
        return (1);
    }
    else if (str == "+inff")
    {
        std::cout << "char: " <<  "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: "  << "+inff" << std::endl;
        std::cout << "double: " << "+inf" << std::endl;
        return (1);
    }
    else if (str == "-inf")
    {
        std::cout << "char: " <<  "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: "  << "-inff" << std::endl;
        std::cout << "double: " << "-inf" << std::endl;
        return (1);
    }
    else if (str == "+inf")
    {
        std::cout << "char: " <<  "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: "  << "+inff" << std::endl;
        std::cout << "double: " << "+inf" << std::endl;
        return (1);
    }
    else if (str == "nan")
    {
        std::cout << "char: " <<  "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: "  << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
        return (1);
    }
    else if (str == "nanf")
    {
        std::cout << "char: " <<  "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: "  << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
        return (1);
    }
    else
        return (0);
}



int ScalarConverter::convert(std::string str)
{
    if (ft_ouinouin(str) == 1)
        return (0);
    if (str.empty())
        return (1);
    if (is_char(str) == 0)
    {
        std::cout << "ITS A BOY ---> CHAR ---> " << "'" << str << "'" << std::endl;
        char converted_char = convert_to_char(str);
        std::cout << "char: " <<  "'" << converted_char << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(converted_char) << std::endl;
        std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(converted_char) << "f" << std::endl;
        std::cout << "double: " << std::setprecision(1) << static_cast<double>(converted_char) << std::endl;
    }
    else if (is_int(str) == 0)
    {
        std::cout << "ITS A BOY ---> INT "  << "'" << str << "'" << std::endl;
        int converted_int = convert_to_int(str);
        if (converted_int > CHAR_MIN && converted_int < CHAR_MAX)
        {
            if (isprint(converted_int))
                std::cout << "char: " <<  "'" << static_cast<char>(converted_int) << "'" << std::endl;
            else
                std::cout << "char: " <<  "Non displayable" << std::endl;
        }
        else
        {
            std::cout << "char: " <<  "impossible" << std::endl;
        }
        if (check(str) == 0)
        {
            std::cout << "int: " << converted_int << std::endl;
            std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(converted_int) << "f" << std::endl;
            std::cout << "double: " << std::setprecision(1) << static_cast<double>(converted_int) << std::endl;
        }
        else
        {
            std::cout << "int: " << "impossible" << std::endl;
            std::cout << "float: "  << "impossible" << std::endl;
            std::cout << "double: " << "impossible" << std::endl; 
        }
    }
    else if (is_float(str) == 0)
    {
        std::cout << "ITS A BOY ---> FLOAT "  << "'" << str << "'" << std::endl;
        float converted_float = convert_to_float(str);
        if (converted_float > CHAR_MIN && converted_float < CHAR_MAX)
        {
            if (isprint(converted_float))
                std::cout << "char: " <<  "'" << static_cast<char>(converted_float) << "'" << std::endl;
            else
                std::cout << "char: " <<  "Non displayable" << std::endl;
        }
        else
        {
            std::cout << "char: " <<  "impossible" << std::endl;
        }
        if (check_float(str) == 0)
        {
            if(check_int_1(str) == 0)
            {
                std::cout << "int: " << converted_float << std::endl;
            }
            else
            {
                std::cout << "int: " << "impossible" << std::endl;
            }
            std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(converted_float) << "f" << std::endl;
            std::cout << "double: " << std::setprecision(1) << static_cast<double>(converted_float) << std::endl;
        }
        else
        {
            std::cout << "int: " << "impossible" << std::endl;
            std::cout << "float: "  << "impossible" << std::endl;
            std::cout << "double: " << "impossible" << std::endl; 
        }
        
    }
    else if (is_double(str) == 0)
    {
        std::cout << "ITS A BOY ---> DOUBLE "  << "'" << str << "'" << std::endl;
        float converted_double = convert_to_double(str);
        if (converted_double > CHAR_MIN && converted_double < CHAR_MAX)
        {
            if (isprint(converted_double))
                std::cout << "char: " <<  "'" << static_cast<char>(converted_double) << "'" << std::endl;
            else
                std::cout << "char: " <<  "Non displayable" << std::endl;
        }
        else
        {
            std::cout << "char: " <<  "impossible" << std::endl;
        }
        if(check_int_1(str) == 0)
        {
            std::cout << "int: " << converted_double << std::endl;
        }
        else
        {
            std::cout << "int: " << "impossible" << std::endl;
        }
        if(check_float(str) == 0)
        {
            std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(converted_double) << "f" << std::endl;
        }
        else
        {
            std::cout << "float: " << "impossible" << std::endl;
        }
        std::cout << "double: " << std::setprecision(1) << static_cast<double>(converted_double) << std::endl;
        //}
        // else
        // {
        //     std::cout << "int: " << "'" << "impossible" << "'" << std::endl;
        //     std::cout << "float: "  << "impossible" << std::endl;
        //     std::cout << "double: " << "impossible" << std::endl; 
        // }
    }
    else
        return (1);
    return (0);
}



