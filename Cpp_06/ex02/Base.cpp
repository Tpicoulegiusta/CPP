/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:28:46 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/04 13:54:19 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{
    srand(time(0));
    int i = rand();
    if (i % 3 == 0)
    {
        Base *Base_A = new A;
        return(Base_A);
    }
    else if (i % 3 == 1)
    {
        Base *Base_B = new B;
        return(Base_B);    }
    else
    {
        Base *Base_C = new C;
        return(Base_C);
    }
}

void identify(Base *p)
{
    if (A *Soheil = dynamic_cast<A*>(p))
        std::cout << "A type" << std::endl;
    else if (B *Ahlem = dynamic_cast<B*>(p))
        std::cout << "B type" << std::endl;
    else if (C *Thierry = dynamic_cast<C*>(p))
        std::cout << "C type" << std::endl;
    else
        std::cout << "Ain't got no TYPE... Bad b****** is the only thing that i like..." << std::endl;
}

void identify(Base &p)
{
    try
    {
    if (dynamic_cast<A*>(&p) != 0)
        std::cout << "A type" << std::endl;
    else if (dynamic_cast<B*>(&p) != 0)
        std::cout << "B type" << std::endl;
    else if (dynamic_cast<C*>(&p) != 0)
        std::cout << "C type" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Ain't got no TYPE... Bad b****** is the only thing that i like..." << std::endl;
    }
    
}






