/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:20:32 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/10 17:00:35 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default_form_name"), _grade_sign(1), _grade_exec(1)
{
    this->_valid = false;
    if (this->_grade_sign > 150)
        throw (Form::GradeTooLowException());
    if (this->_grade_sign < 1)
        throw (Form::GradeTooHighException());
    if (this->_grade_exec > 150)
        throw (Form::GradeTooLowException());
    if (this->_grade_exec < 1)
        throw (Form::GradeTooHighException());
}

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    this->_valid = false;
    if (this->_grade_sign > 150)
        throw (Form::GradeTooLowException());
    if (this->_grade_sign < 1)
        throw (Form::GradeTooHighException());
    if (this->_grade_exec > 150)
        throw (Form::GradeTooLowException());
    if (this->_grade_exec < 1)
        throw (Form::GradeTooHighException());
}

Form::~Form()
{
}

std::string const Form::getName() const
{
    return (this->_name);
}

int Form::getGrade_sign() const
{
    return (this->_grade_sign);
}

int Form::getGrade_exec() const
{
    return (this->_grade_exec);
}

bool Form::getValid() const
{
    return (this->_valid);
}

std::ostream& operator<<(std::ostream& os, const Form& rhs)
{
    os << rhs.getName();
    os << ", grade_sign via form : "; 
    os << rhs.getGrade_sign();
    os << ", grade_exec via form : ";
    os << rhs.getGrade_exec();
    os << " signed ? :";
    os << (rhs.getValid() ? "true" : "false");
	return (os);
}

void Form::beSigned(Bureaucrat bubu)
{
    if (bubu.getGrade() <= getGrade_sign())
        this->_valid = true;
    else
        throw (Form::GradeTooLowException());        
}





