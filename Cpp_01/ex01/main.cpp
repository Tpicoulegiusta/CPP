/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:44:58 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/07 18:06:59 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int N = 3;
    Zombie* horde = zombieHorde(N, "horde");

    for(int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    
    delete[] (horde);

    return (0);
}
