/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:43:59 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/18 14:18:38 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("default_ppf_AForm", 25, 5)
{
    this->_target = "random_default";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    AForm::operator=(rhs);
    return (*this);
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : AForm()
{
    *this = cpy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("default_ppf_AForm", 25, 5)
{
    this->_target = target;
}

std::string PresidentialPardonForm::getTarget()
{
    return (this->_target);
}

void PresidentialPardonForm::exec_Forms(Bureaucrat const &executor) const
{
    if (getValid() == 1 && executor.getGrade() <= this->getGrade_exec())
    {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        throw (AForm::GradeTooLowException());
}
