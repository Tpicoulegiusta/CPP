/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:56 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 13:18:02 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main ()
{
    Weapon sabre = Weapon("tasoeur");

    HumanA Soheil("SosoSoheil", sabre);
    Soheil.attack();
    sabre.setType("ak47");
    Soheil.attack();
    HumanB Karima("Kakarima");
    Weapon couteau_de_soheil = Weapon("canif de soheil");
    Karima.setWeapon(couteau_de_soheil);
    Karima.attack();
    couteau_de_soheil.setType("Katana de Soheil");
    Karima.attack();
    return (0);
}
