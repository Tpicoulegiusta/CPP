/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:14:00 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/07 17:09:49 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


void ft_r_p_n(char *str)
{
    
    std::stack<long long int> pile;
    std::stringstream ss(str);
    std::string cara;
    while (ss >> cara)
    {
        if(cara.size() != 1)
        {
           // std::cout << 
            return ;
        }
        if(cara[0] != '+' && cara[0] != '-' && cara[0] != '/' && cara[0] != '*' && !isdigit(cara[0]))
        {
           // std::cout << 
            return ;
        }
        if(isdigit(cara[0]))
            pile.push(cara[0]);
        else if(cara[0] == '+' && cara[0] == '-' && cara[0] == '/' && cara[0] == '*')
        {
            if(pile.size() < 2)
                return ;
            
            long long int b = pile.top();
            pile.pop();
            long long int a = pile.top();
            pile.pop();
            
            
        }
        
        std::cout << "'" + cara + "'" << std::endl;
    }
    //check si la taille de notre stack est egale a 1 ou non
    //ft_innit_container(str);
}

