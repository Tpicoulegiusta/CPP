/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:04:49 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 14:28:02 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template <typename T>
T min(const T a, const T b)
{
    if (a > b)
        return (b);
    else if (a < b)
        return (a);
    else 
        return (b);
}

template <typename T>
T max(const T a, const T b)
{
    if (a > b)
        return (a);
    else if (a < b)
        return (b);
    else 
        return (b);
}


