/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:15:36 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/03 16:57:09 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT
#include <iostream>


class Contact
{
private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret;
    
public:
    Contact();
    ~Contact();

    std::string access_f();
    std::string access_l();
    std::string access_n();
    std::string access_p();
    std::string access_d();

    void    set_f(std::string str);
    void    set_l(std::string str);
    void    set_n(std::string str);
    void    set_p(std::string str);
    void    set_d(std::string str);
    
    
};


#endif
