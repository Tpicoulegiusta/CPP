/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:51:51 by tpicoule          #+#    #+#             */
/*   Updated: 2024/07/01 14:46:24 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
    Data data;
    data.name = "FBI classified";
    data.i = 999;

    std::cout << "Address at the begining: " << &data << std::endl;

    uintptr_t serialized = Serializer::serialize(&data);
    Data *deserialized = Serializer::deserialize(serialized);

    std::cout << "Serialized_ADDRESS: " << serialized << std::endl;
    std::cout << "deserialized_ADDRESS: " << deserialized << std::endl;
}
