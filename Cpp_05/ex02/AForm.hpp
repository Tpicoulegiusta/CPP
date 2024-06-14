/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:19:01 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/14 14:52:26 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM
# define AFORM
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>
#include <fstream>

class Bureaucrat;
class PresidentialPardonForm;

class AForm
{
protected:
    std::string const _name;
    bool _valid;
    int const _grade_sign;
    int const _grade_exec;
public:
    AForm();
    AForm(std::string name, int grade_sign, int grade_exec);
    virtual ~AForm();
    AForm &operator=(AForm const &rhs);
    std::string const getName() const;
    int getGrade_sign() const;
    int getGrade_exec() const;
    bool getValid() const;
    void beSigned(Bureaucrat bubu);
    void execute(Bureaucrat const &executor) const;
    virtual void exec_Forms(Bureaucrat const &executor) const = 0;
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("EXCEPTION_TOO_HIGH_AFORM");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("EXCEPTION_TOO_LOW_AFORM");
            }
    };
    class CantExecuteException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("EXCEPTION_CANT_EXECUTE");
            }
    };
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);





#endif
