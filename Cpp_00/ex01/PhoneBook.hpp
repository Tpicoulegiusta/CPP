/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:12:59 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/28 14:56:57 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK
# include "Contact.hpp"

class PhoneBook
{
	private :
		Contact _Contact[2];
		int		_index;
		int		_ctc_nbr;
	public :
		Contact* recup_user();
		PhoneBook();
		~PhoneBook();
		void	add();
		std::string	user_input(std::string str);
		int ctc_nbr();
};

#endif
