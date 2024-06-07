/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:20:15 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 12:09:19 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie bizom;
    Zombie* new_Zombie = newZombie("new_name");

    bizom.announce();
    new_Zombie->announce();
    randomChump("random Zombie");
    
    delete (new_Zombie);
    return (0);
}
