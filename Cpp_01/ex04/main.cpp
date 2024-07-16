/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:06:56 by tpicoule          #+#    #+#             */
/*   Updated: 2024/05/29 13:29:35 by tpicoule         ###   ########.fr       */
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
    std::string str = (std::string)argv[1] + ".replace"; //str devient argv[1](nom du programme) + .replace
    const char *av = str.c_str();//Le B

    std::ofstream Replaced_file(av);//ouvre un fichier avec le nom stocke dans av//(si reussi --> new fichier replaced_file)

    std::ifstream fichier(argv[1]);//ouvre le argv[1](fichier) en lecture 
    std::string s1(argv[2]);//s1 devient argv[2]
    std::string s2 = argv[3];//s2 devient argv[3]
    if (s1.empty() || s2.empty())//si une chaine est vide--> arg pas valid
    {
        std::cout << "No valid args" << std::endl;
        return (1);
    }
    if (!fichier.is_open())//si fichier non ouvrable--> bad file
    {
        std::cerr << "Erreur file pas ouvrable" << std::endl;
        return (1);
    }
    std::string line;//chaine de cara qui va stocker temporairement les lignes
    while(getline(fichier, line))//tant qu'il y a des lignes a lire lets go
    {
        size_t pos = 0; // Initialise le suivi de position

        while ((pos = line.find(s1, pos)) != std::string::npos) // Recherche la prochaine occurrence de s1 à partir de la position
        {
            line.erase(pos, s1.length()); // Supprime s1
            line.insert(pos, s2); // Insère s2 à la même position
            pos += s2.length(); // Met à jour la position pour la prochaine recherche
        }
        Replaced_file << line << std::endl;
    }
    return 0;
}

//La fonction find renvoie la position de la première occurrence trouvée,
//ou la valeur spéciale std::string::npos 
//si aucune occurrence n'est trouvée. LIGNE 49//
