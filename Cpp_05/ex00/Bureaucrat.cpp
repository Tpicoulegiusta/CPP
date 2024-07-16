/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/07 16:46:21 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default_name")
{
    this->_grade = 1;
    if (this->_grade > 150)
        throw (Bureaucrat::GradeTooHighException());
    if (this->_grade < 0)
        throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
}

std::string const Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::in_grade()
{
    this->_grade++;
}

void Bureaucrat::dec_grade()
{
    this->_grade--;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName();
    os << ", bureaucrat grade ";
    os << rhs.getGrade();
    
	return (os);
}
