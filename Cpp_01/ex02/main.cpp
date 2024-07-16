/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:20:38 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/08 13:54:00 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI IS BRAIN";//string variable//
    std::string* stringPTR = &brain;//pointer to the string//
    std::string &stringREF = brain;//reference to the sring//

    std::string val_ptr = *stringPTR;//val_ptr take the value of the pointer//
    std::string val_ref = stringREF;//val_ref take the value of the ref//
    
    std::cout << &brain << std::endl;//memory address of the sring variable//
    std::cout << stringPTR << std::endl;//memory address stringPTR//
    std::cout << &stringREF << std::endl;//memory address stringREF//

    std::cout << brain << std::endl;//value of string//
    std::cout << val_ptr << std::endl;//value of ptr//
    std::cout << val_ref << std::endl;//value of ref//
    return (0);
}
