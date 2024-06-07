/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:22 by tpicoule          #+#    #+#             */
/*   Updated: 2024/06/03 14:50:15 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP
#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string _Name;
    int _Hit_points;
    int _Energy_points;
    int _Attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string Name, int hit_points, int energy_points, int attack_damage);
    ~ClapTrap();
    ClapTrap(ClapTrap const &cpy);
    ClapTrap &operator=(ClapTrap const &rhs);
    virtual void attack(const std::string &target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
};

#endif
