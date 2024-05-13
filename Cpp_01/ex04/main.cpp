/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:06:56 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/13 14:05:59 by tpicoule         ###   ########.fr       */
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
        size_t pos = 0; // Initialise le suivi de position

        while ((pos = line.find(s1, pos)) != std::string::npos) // Recherche la prochaine occurrence de s1 à partir de la position courante
        {
            line.erase(pos, s1.length()); // Supprime s1
            line.insert(pos, s2); // Insère s2 à la même position
            pos += s2.length(); // Met à jour la position pour la prochaine recherche
        }
        Replaced_file << line << std::endl;
    }
    return 0;
}

