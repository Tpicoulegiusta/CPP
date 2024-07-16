/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:18 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/18 16:15:36 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"
#include <exception>

int main()
{
    std::cout << "-- TESTING TOO HIGH EXCEPTION --" << std::endl;
    try
    {
        Bureaucrat Fabriccio;
        std::cout << Fabriccio << std::endl;
        std::cout << Fabriccio.getGrade() << std::endl;
        std::cout << Fabriccio.getName() << std::endl; 
        Fabriccio.in_grade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-- TESTING TOO LOW EXCEPTION --" << std::endl;
    try
    {
        Bureaucrat Fabriccio;
        std::cout << Fabriccio << std::endl;
        std::cout << Fabriccio.getGrade() << std::endl;
        std::cout << Fabriccio.getName() << std::endl; 
        for (int i = 0; i < 150; i++)
            Fabriccio.dec_grade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
