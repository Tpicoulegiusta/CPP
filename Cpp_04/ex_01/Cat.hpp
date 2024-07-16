/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:49:08 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 17:23:17 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_b_ideas;
public:
    Cat();
    ~Cat();
    Cat(std::string _t_name);
    Cat &operator=(Cat const &rhs);
    Cat(Cat const &cpy);
    void makeSound() const;

    Brain   *getBrain();
};




#endif
