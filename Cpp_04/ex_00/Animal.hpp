/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:33 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 14:25:22 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
# define ANIMAL
#include <string>
#include <iostream>

class Animal
{
private:
    std::string _type;
public:
    Animal();
    ~Animal();
    Animal(std::string _t_name);
    Animal &operator=(Animal const &rhs);
    Animal(Animal const &cpy);
};



#endif
