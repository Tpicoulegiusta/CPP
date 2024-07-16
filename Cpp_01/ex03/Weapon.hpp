/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:09:00 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 13:11:33 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    // Weapon();
    Weapon(std::string arme);
    ~Weapon();

	std::string const &getType() const;
	void setType(std::string str);
};

#endif
