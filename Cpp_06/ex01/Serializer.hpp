/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:49:02 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/01 14:44:17 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER
# define SERIALIZER

#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
    //struct//
    std::string name;
    int i;
    //struct//    
};

class Serializer
{
private:
public:
    Serializer();
    ~Serializer();
    Serializer &operator=(Serializer const &rhs);
    Serializer(Serializer const &cpy);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};







#endif
