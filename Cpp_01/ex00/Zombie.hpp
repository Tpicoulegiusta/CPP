/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:25:50 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/07 15:27:30 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
# define ZOMBIE
#include <string>

class Zombie
{
    private :
        std::string _name;
    public :
		Zombie();
		~Zombie();
        void    announce();
		void change_name(std::string name);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
