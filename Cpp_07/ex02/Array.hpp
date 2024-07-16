/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:04:07 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 16:16:24 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

template <typename T>
class Array
{
private:
public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(Array const &cpy);
    Array &operator=(Array const &rhs);
    int size();
};


