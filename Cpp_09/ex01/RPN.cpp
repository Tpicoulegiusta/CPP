/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:14:00 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/13 13:13:05 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


void ft_r_p_n(char *str)
{
    
    std::stack<int> pile;
    std::stringstream ss(str);
    std::string cara;
    int nmb;
    while (ss >> cara)
    {
        if(cara.size() != 1)
        {
            std::cout << "Error: Bad input" << std::endl;
            return ;
        }
        if(cara[0] != '+' && cara[0] != '-' && cara[0] != '/' && cara[0] != '*' && !isdigit(cara[0]))
        {
            std::cout << "Error: Bad input :: ALPHANUMERIC PROBLEM" << std::endl;
            return ;
        }
        if(isdigit(cara[0]))
        {
            nmb = atoi(cara.c_str());
            pile.push(nmb);
        }
        else if(cara[0] == '+' || cara[0] == '-' || cara[0] == '/' || cara[0] == '*')
        {
            if(pile.size() < 2)
            {
                std::cout << "Error: Bad input :: CAN'T OPERATE" << std::endl;
                return ;
            }
            if (pile.size() >= 2)
            {
                int b = pile.top();
                pile.pop();
                int a = pile.top();
                pile.pop();
                if (cara[0] == '+')
                    pile.push(a + b);
                if (cara[0] == '-')
                    pile.push(a - b);
                if (cara[0] == '*')
                    pile.push(a * b);
                if (cara[0] == '/')
                {
                    if (b == 0)
                    {
                        std::cout << "Error: Bad input :: CANT'T BE /0" << std::endl;
                        return ;
                    }
                    pile.push(a / b);
                }
            }
        }
    }
    if (pile.size() != 1)
    {
        std::cout << "Error: Bad input :: SIZE AT THE END" << std::endl;
        return ;
    }
    std::cout << pile.top() << std::endl;
    return ;
}
//   5 5 + 7 + 9 + 2 8 - *
