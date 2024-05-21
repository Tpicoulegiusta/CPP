/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:14:21 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/21 16:49:13 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN
#include <string>
#include <iostream>

class Brain
{
private:

public:
    std::string _ideas[100];
    Brain();
    ~Brain();
    Brain(Brain const &cpy);
    Brain &operator=(Brain const &rhs);
};




#endif
