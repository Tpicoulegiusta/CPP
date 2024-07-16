/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:09:00 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/09 16:51:53 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN
# define HUMAN

#include "HumanA.hpp"
#include "weapon.hpp"
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
