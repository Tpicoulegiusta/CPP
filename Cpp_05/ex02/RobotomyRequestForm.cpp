/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:49:50 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/11 18:07:39 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("default_rrf_AForm", 72, 45)
{
    this->_target = "random_default";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    AForm::operator=(rhs);
    return (*this);
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm()
{
    *this = cpy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("default_rrf_AForm", 72, 45)
{
    this->_target = target;
}

void RobotomyRequestForm::exec_Forms(Bureaucrat const &executor) const
{
    if (getValid() == 1 && executor.getGrade() <= this->getGrade_exec())
    {
        std::cout;
    }
    else
        throw (AForm::GradeTooLowException());
}

