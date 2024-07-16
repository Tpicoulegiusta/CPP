/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/07 13:38:35 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->_grade = 0;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const Bureaucrat::getName() const
{
    return (this->_name);
}

int const Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::im_grade()
{
    this->_grade++;
}

void Bureaucrat::dec_grade()
{
    this->_grade--;
}







