/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:24 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/10 16:58:14 by tpicoule         ###   ########.fr       */
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

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName();
    os << ", bureaucrat grade ";
    os << rhs.getGrade();
    
	return (os);
}
void Bureaucrat::in_grade()
{
    this->_grade--;
    if (this->_grade < 1)
        throw (Bureaucrat::GradeTooLowException());
}

void Bureaucrat::dec_grade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw (Bureaucrat::GradeTooHighException());
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

void Bureaucrat::signForm(Form fofo) const
{
    try
    {
        fofo.beSigned(*this);
        std::cout << getName();
        std::cout << " signed ";
        std::cout << fofo.getName() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cout << getName();
        std::cout << " couldn't sign form ";
        std::cout << fofo.getName();
        std::cout << " because ";
        std::cout << e.what() << '\n';
    }
}


