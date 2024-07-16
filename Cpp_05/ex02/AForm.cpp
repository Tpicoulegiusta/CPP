/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:20:32 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/10 17:09:34 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default_Aform_name"), _grade_sign(1), _grade_exec(1)
{
    this->_valid = false;
    if (this->_grade_sign > 150)
        throw (AForm::GradeTooLowException());
    if (this->_grade_sign < 1)
        throw (AForm::GradeTooHighException());
    if (this->_grade_exec > 150)
        throw (AForm::GradeTooLowException());
    if (this->_grade_exec < 1)
        throw (AForm::GradeTooHighException());
}

AForm::AForm(std::string name, int grade_sign, int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    this->_valid = false;
    if (this->_grade_sign > 150)
        throw (AForm::GradeTooLowException());
    if (this->_grade_sign < 1)
        throw (AForm::GradeTooHighException());
    if (this->_grade_exec > 150)
        throw (AForm::GradeTooLowException());
    if (this->_grade_exec < 1)
        throw (AForm::GradeTooHighException());
}

AForm::~AForm()
{
}

std::string const AForm::getName() const
{
    return (this->_name);
}

int AForm::getGrade_sign() const
{
    return (this->_grade_sign);
}

int AForm::getGrade_exec() const
{
    return (this->_grade_exec);
}

bool AForm::getValid() const
{
    return (this->_valid);
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs)
{
    os << rhs.getName();
    os << ", grade_sign via Aform : "; 
    os << rhs.getGrade_sign();
    os << ", grade_exec via Aform : ";
    os << rhs.getGrade_exec();
    os << " signed ? :";
    os << (rhs.getValid() ? "true" : "false");
	return (os);
}

void AForm::beSigned(Bureaucrat bubu)
{
    if (bubu.getGrade() <= getGrade_sign())
        this->_valid = true;
    else
        throw (AForm::GradeTooLowException());        
}

AForm &AForm::operator=(AForm const &rhs)
{
    this->_valid = rhs._valid;
    return (*this);
}

void AForm::execute(Bureaucrat const &executor) const
{
    try
    {
        exec_Forms(executor);
    }
    catch(const std::exception& e)
    {
        throw (AForm::CantExecuteException());
    }
}



