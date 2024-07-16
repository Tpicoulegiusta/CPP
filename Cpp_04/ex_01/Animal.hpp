/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:33 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 17:34:00 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
# define ANIMAL
#include <string>
#include <iostream>

#define RED     "\033[0;31m" // Red
#define GREEN   "\033[0;32m" // Green
#define YELLOW  "\033[0;33m" // Yellow
#define BLUE    "\033[0;34m" // Blue
#define RESET   "\033[0m"    // Reset

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    virtual ~Animal();
    Animal(std::string _t_name);
    Animal &operator=(Animal const &rhs);
    Animal(Animal const &cpy);
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
