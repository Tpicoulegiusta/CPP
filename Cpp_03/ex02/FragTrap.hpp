/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 08:36:34 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/20 14:02:01 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class FragTrap : public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(FragTrap const &cpy);
    FragTrap &operator=(FragTrap const &rhs);
    FragTrap(std::string name);

    void highFivesGuys(void);
};



#endif
