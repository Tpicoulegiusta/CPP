/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:23:50 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/17 14:58:46 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    std::string _Name;
    int _Hit_points;
    int _Energy_points;
    int _Attack_damage;
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap const &cpy);
    ScavTrap &operator=(ScavTrap const &rhs);
    void guardGate();
    void attack(const std::string &target);
};

#endif
