/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:06:56 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/10 17:15:38 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "No valid args" << std::endl;
        return (1);
    }
    std::string str = (std::string)argv[1] + ".replace";
    const char *av = str.c_str();

    std::ofstream Replaced_file(av);

    std::ifstream fichier(argv[1]);
    std::string s1(argv[2]);
    std::string s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "No valid args" << std::endl;
        return (1);
    }
    if (!fichier.is_open())
    {
        std::cerr << "Erreur file pas ouvrable <<" << std::endl;
        return (1);
    }
    std::string line;
    while(getline(fichier, line))
    {
        size_t search = line.find(s1);
        while (search < line.length())
        {
            line.erase(search, s1.length());
            line.insert(search, s2);
            search += s2.length();
        }
        Replaced_file << line << std::endl;
    }
    return 0;
}
