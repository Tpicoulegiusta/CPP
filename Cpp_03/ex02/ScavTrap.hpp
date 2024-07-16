/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:23:50 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 14:02:10 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
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
