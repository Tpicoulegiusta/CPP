/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:33 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 16:46:29 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL
# define AANIMAL
#include <string>
#include <iostream>

#define RED     "\033[0;31m" // Red
#define GREEN   "\033[0;32m" // Green
#define YELLOW  "\033[0;33m" // Yellow
#define BLUE    "\033[0;34m" // Blue
#define RESET   "\033[0m"    // Reset

class AAnimal
{
protected:
    std::string _type;
public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(std::string _t_name);
    AAnimal &operator=(AAnimal const &rhs);
    AAnimal(AAnimal const &cpy);
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
