/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:37:35 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/14 17:07:20 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>


void check_args(int argc, char **argv)
{
    //check si les args sont bons ex:: int max, isdigit...//
    if(argc <= 2)
    {
        std::cout << "Error:: ARGS PROBLEM" << std::endl;
        return;
    }
    for(int i = 1; argv[i]; i++)
    {
        for(int j = 0; argv[i][j]; j++)
        {
            if(!isdigit(argv[i][j]))
            {
                std::cout << "Error:: ARGS PROBLEM" << std::endl;
                return;
            }
        }
        if((atoi(argv[i]) > INT_MAX) && (atoi(argv[i]) < 0))
        {
            std::cout << "Error:: INT MAX PROBLEM" << std::endl;
            return;
        }
    }
}

std::vector<int> convert_args(int argc, char **argv)
{
    check_args(argc, argv);
    //arg = passage en int//
    std::vector<int> nb;
    for(int i = 1; argv[i]; i++)
        nb.push_back(atoi(argv[i]));
    return(nb);
}

void sort_value(std::vector<int> &nb)
{
    //i need to sooooort
}

void check_convert_sort_print(int argc, char **argv)
{
    std::vector<int> nb = convert_args(argc, argv);
    std::cout << "Before:  ";
    for(unsigned long i = 0; i < nb.size(); i++)
    {
        std::cout << nb[i] << " ";
    }
    std::cout << '\n' << std::endl;
    sort_value(nb);
}
