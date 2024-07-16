/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:28:43 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/01 15:30:52 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE
# define BASE
#include <string>
#include <iostream>

class Base
{
private:
public:
    Base();
    virtual ~Base();
    Base &operator=(Base const &rhs);
    Base(Base const &cpy);
};






#endif