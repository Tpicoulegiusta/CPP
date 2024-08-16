/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:37:22 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/16 15:51:32 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <cstdio>
#include <climits>
#include <sstream>
#include <cstdlib>
#include <stack>
#include <vector>


std::vector<int> convert_args(int argc, char **argv);
void check_args(int argc, char **argv);
void sort_value(std::vector<int> &nb);
void check_convert_sort_print(int argc, char **argv);
void ft_recursive(std::vector<int> &smax, int n);
void ft_min_to_minmax(std::vector<int> &smax, std::vector<int> &smin);


