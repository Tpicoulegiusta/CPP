/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:22 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/16 18:27:50 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP
#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string _Name;
    int _Hit_points;
    int _Energy_points;
    int _Attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ~ClapTrap();
    ClapTrap(ClapTrap const &cpy);
    ClapTrap &operator=(ClapTrap const &rhs);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};




#endif
