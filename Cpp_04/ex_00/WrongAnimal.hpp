/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:43:53 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 17:30:55 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL
# define WRONGANIMAL
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const &cpy);
    WrongAnimal(std::string type);
    WrongAnimal &operator=(WrongAnimal const &rhs);
    void makeSound() const;
    std::string getType() const;
};





#endif
