/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:49:02 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/09 14:00:27 by tpicoule         ###   ########.fr       */
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
    Serializer();
    Serializer(Serializer const &cpy);
public:
    ~Serializer();
    Serializer &operator=(Serializer const &rhs);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};







#endif
