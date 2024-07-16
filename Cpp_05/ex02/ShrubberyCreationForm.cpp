/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:51:33 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/11 18:08:01 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default_scf_AForm", 145, 137)
{
    this->_target = "random_default";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    AForm::operator=(rhs);
    return (*this);
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : AForm()
{
    *this = cpy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("default_scf_AForm", 145, 137)
{
    this->_target = target;
}

void ShrubberyCreationForm::exec_Forms(Bureaucrat const &executor) const
{
    if (getValid() == 1 && executor.getGrade() <= this->getGrade_exec())
    {
        std::cout;
    }
    else
        throw (AForm::GradeTooLowException());
}

