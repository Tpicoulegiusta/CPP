/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:37:46 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 15:59:28 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T, typename fonction> ///// de meilleurs explications sont souhaitees/////
void iter(T *tab, int len, fonction ft)
{
    for (int i = 0; i < len; i++)
        ft(tab[i]);
}

