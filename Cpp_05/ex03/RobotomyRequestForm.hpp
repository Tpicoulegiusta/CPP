/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:48:53 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/11 18:08:36 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM
#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    RobotomyRequestForm(RobotomyRequestForm const &cpy);
    RobotomyRequestForm(std::string target);
    void exec_Forms(Bureaucrat const &executor) const; 
};



#endif
