/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:18 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/07 16:50:32 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"
#include <exception>

int main()
{
    try
    {
        Bureaucrat Fabriccio;
        std::cout << Fabriccio << std::endl;
        std::cout << Fabriccio.getGrade() << std::endl;
        std::cout << Fabriccio.getName() << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
