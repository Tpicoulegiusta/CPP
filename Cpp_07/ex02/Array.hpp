/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:04:07 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/09 14:13:14 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

template <typename T>
class Array
{
    private:
        T   *_array;
        unsigned int length_array;
    public:
        Array()
        {
            this->_array = new T[0];
            this->length_array = 0;
        }
        ~Array()
        {
            delete[] this->_array;
        }
        Array(unsigned int n)
        {
            this->_array = new T[n];
            for (unsigned int i = 0; i < n; ++i)
            {
                this->_array[i] = T();
            }
            this->length_array = n;
        }
        Array(Array const &cpy)
        {
            *this = cpy;
        }
        Array &operator=(Array const &rhs)
        {
            this->_array = new T[rhs.length_array];
            for (int i = 0; i < rhs.length_array; ++i)
            {
                this->_array[i] = rhs._array[i];
            }
            return (*this);

        }
        int size()
        {
            return(this->length_array);
        }
        T &operator[](const unsigned int rhs)
        {
            if (rhs > this->length_array)
            {
                std::cout << "[1]    59250 sexmentation fault (core dumped)" << std::endl;
                throw (std::length_error("Length_error by trabiscott"));
            }
            return (this->_array[rhs]);
        }
        T &operator[](const unsigned int rhs) const
        {
            if (rhs > this->length_array)
            {
                std::cout << "[1]    59250 sexmentation fault (core dumped)" << std::endl;
                throw (std::length_error("Length_error by trabiscott"));
            }
            return (this->_array[rhs]);
        }
};

