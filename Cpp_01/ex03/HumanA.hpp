/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:46 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/08 17:03:45 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA
#include <string>
#include <iostream>
#include "weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon* _Weapon;
public:
    HumanA();
    ~HumanA();
    std::string get_name();
    void attack();
    Weapon* recup_type();
};

#endif

