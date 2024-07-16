/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:07:22 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/10 16:39:07 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string name, int grade);
    std::string const getName() const;
    int getGrade() const;
    void in_grade();
    void dec_grade();
    Bureaucrat &operator=(Bureaucrat const &rhs);
    Bureaucrat(Bureaucrat const &cpy);
    void signForm(Form fofo) const;
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("EXCEPTION_TOO_HIGH");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("EXCEPTION_TOO_LOW");
            }
    };
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);



#endif
