/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/18 13:56:53 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default_name")
{
    this->_grade = 1;
    if (this->_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    if (this->_grade < 1)
        throw (Bureaucrat::GradeTooHighException());
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
    this->_grade--;
    if (this->_grade < 1)
        throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::dec_grade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName();
    os << ", bureaucrat grade ";
    os << rhs.getGrade();
    
	return (os);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
    return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
    *this = cpy;
}

