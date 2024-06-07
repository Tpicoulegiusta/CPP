/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:22 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/07 13:38:53 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT
#include <string>
#include <iostream>

class Bureaucrat
{
private:
    std::string const _name = "Default_Bureaucrat";
    int _grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    std::string const getName() const;
    int const getGrade() const;
    void im_grade();
    void dec_grade();
};

#endif
