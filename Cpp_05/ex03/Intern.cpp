/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:38:21 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/14 16:04:14 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &rhs)
{
    (void) rhs;
    return(*this);
}

Intern::Intern(Intern const &cpy)
{
    *this = cpy;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm   *forfor[3] = {new PresidentialPardonForm(target), new ShrubberyCreationForm(target), new RobotomyRequestForm(target)};
    AForm   *returned = NULL;

    for (int i = 0; i < 3; i++)
    {
        if (forfor[i]->getName() == name)
        {
            std::cout << "Intern creates " << forfor[i]->getName() << std::endl;
            returned = forfor[i];
        }
        else
            delete(forfor[i]);
    }
    if (!returned)
        std::cout << "NO CORRESPONDANCE" << std::endl;
    return (returned);
}
