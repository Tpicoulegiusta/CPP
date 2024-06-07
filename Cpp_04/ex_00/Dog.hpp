/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:28:47 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/04 12:10:56 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG
#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
    Dog();
    ~Dog();
    // Dog(std::string _t_name);
    Dog &operator=(Dog const &rhs);
    Dog(Dog const &cpy);
    void makeSound() const;
};




#endif
