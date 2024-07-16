/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:43:42 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 17:00:11 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT
# define WRONGCAT
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    
public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &cpy);
    WrongCat(std::string type);
    WrongCat &operator=(WrongCat const &rhs);
    void makeSound() const;
};





#endif
