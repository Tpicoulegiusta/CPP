/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:08:46 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/09 15:09:17 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA
# include <string>
# include <iostream>
# include "weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_sabre;
public:
    HumanA(std::string arme, Weapon &sabre);
    ~HumanA();
    std::string get_name();
    void attack();
};

#endif

