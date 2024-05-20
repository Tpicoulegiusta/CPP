/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:49:08 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 16:29:08 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT
#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
    Cat();
    ~Cat();
    Cat(std::string _t_name);
    Cat &operator=(Cat const &rhs);
    Cat(Cat const &cpy);
    void makeSound() const;
};




#endif
