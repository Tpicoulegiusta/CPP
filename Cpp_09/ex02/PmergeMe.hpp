/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:37:22 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/20 16:11:33 by tpicoule         ###   ########.fr       */
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
void sort_value_vec(std::vector<int> &nb);
void check_convert_sort_print(int argc, char **argv);
void ft_recursive(std::vector<int> &smax, int n);
void ft_min_to_minmax(std::vector<int> &smax, std::vector<int> &smin);
void ft_min_to_max(std::vector<int> &smax, std::vector<int> &smin);


