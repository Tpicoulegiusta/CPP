/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:28:43 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 13:54:03 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
// #include "C.hpp"
#include <string>
// #include "A.hpp"
#include <iostream>
// #include "B.hpp"
#include <cstdlib>

class Base
{
private:
public:
    virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);



#endif
