/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:19:01 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/10 16:48:09 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
# define FORM
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

class Bureaucrat;

class Form
{
private:
    std::string const _name;
    bool _valid;
    int const _grade_sign;
    int const _grade_exec;
public:
    Form();
    Form(std::string name, int grade_sign, int grade_exec);
    ~Form();
    std::string const getName() const;
    int getGrade_sign() const;
    int getGrade_exec() const;
    bool getValid() const;
    void beSigned(Bureaucrat bubu);
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("EXCEPTION_TOO_HIGH_FORM");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("EXCEPTION_TOO_LOW_FORM");
            }
    };
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);





#endif
