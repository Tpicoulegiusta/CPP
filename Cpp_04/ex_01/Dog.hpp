/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:28:47 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 17:23:15 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_b_ideas;
public:
    Dog();
    ~Dog();
    Dog(std::string _t_name);
    Dog &operator=(Dog const &rhs);
    Dog(Dog const &cpy);
    void makeSound() const;

    Brain   *getBrain();
};




#endif
