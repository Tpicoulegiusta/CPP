/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:53 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 13:13:05 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
# define HUMANB
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *couteau;
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &canif);
    void attack();
};


#endif
