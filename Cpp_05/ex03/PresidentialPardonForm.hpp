/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:37:22 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/11 18:03:08 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM
#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    PresidentialPardonForm(PresidentialPardonForm const &cpy);
    PresidentialPardonForm(std::string target);
    std::string getTarget();
    void exec_Forms(Bureaucrat const &executor) const;
};


#endif

