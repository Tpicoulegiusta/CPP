/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:37:35 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/16 16:08:25 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <algorithm>


void check_args(int argc, char **argv)
{
    //check si les args sont bons ex:: int max, isdigit...//
    if(argc <= 2)
    {
        std::cout << "Error:: ARGS PROBLEM" << std::endl;
        return;
    }
    for(int i = 1; argv[i]; i++)
    {
        for(int j = 0; argv[i][j]; j++)
        {
            if(!isdigit(argv[i][j]))
            {
                std::cout << "Error:: ARGS PROBLEM" << std::endl;
                return;
            }
        }
        if((atoi(argv[i]) > INT_MAX) && (atoi(argv[i]) < 0))
        {
            std::cout << "Error:: INT MAX PROBLEM" << std::endl;
            return;
        }
    }
}

std::vector<int> convert_args(int argc, char **argv)
{
    check_args(argc, argv);
    //arg = passage en int//
    std::vector<int> nb;
    for(int i = 1; argv[i]; i++)
        nb.push_back(atoi(argv[i]));
    return(nb);
}

void ft_recursive(std::vector<int> &smax, int n)
{
    if(n <= 1)//si 1 element ou si deja trie//
        return;
    ft_recursive(smax, n - 1);//on reduit la taille du vecteur pour le ranger petit a petit grace a la recursive//
    int last = smax[n - 1];
    int j = n - 2;
    while(j >= 0 && smax[j] > last)//on compare notre sous-vecteur, on regrade ou va le chiffre a inserer et on decale tout a sa droite si besoin//
    {
        smax[j + 1] = smax[j];
        j--;
    }
    smax[j + 1] = last;
}


void ft_min_to_minmax(std::vector<int> &smax, std::vector<int> &smin)
{
    int j;
    for(size_t i = 0; i < smin.size(); i++)
    {
        if(smin[i] < 0)
            smin.pop_back();
    }
    for(size_t i = 0; i < smin.size(); i++)
    {
        if(smin[i] < j)
            j = smin[i];
    }
    if(j == 0)
    {
        size_t i = 0;
        while(i < smax.size())
        {
            if(smax[i] == 0)
                smax.push_back(j);
            i++;
        }
    }
    std::cout << j << std:: endl;
    for(size_t i = 0; i < smin.size(); i++)
    {
        if(smin[i] == j)
            smin.erase(smin.begin() + i);
    }
    std::cout << "{";
    for(size_t i = 0; i < smax.size(); i++)
    {
        std::cout << smax[i] << ", "; 
    }
    std::cout << "}";
}

void ft_min_to_top(std::vector<int> &smax)
{
    int j;
    for(size_t i = 0; i < smax.size(); i++)
    {
        if(smax[i] < j)
            j = i;
    }
    for(int i = smax.size(); i != 0; i--)
    {
        std::swap(smax[i], smax[i - 1]);
    }
    std::cout << "{";
    for(size_t i = 0; i < smax.size(); i++)
    {
        std::cout << smax[i] << ", "; 
    }
    std::cout << "}";
}


void sort_value(std::vector<int> &nb)
{
    //i need to sooooort
    //Ford_Johnson
    //s{6, 4, 7, 78, 99, 1, 8}
    //On range par pairs s = {(6, 4),(7, 78),(99, 1),(8)}
    //On retire les maxs des pairs et on les rangent ailleurs smax = {6, 78, 99, 8} --> le chiffre solo est donc le plus grands
    //                                                        smin = {4, 7, 1}
    //On fait une fonction recursive pour trier smax smax = {6, 8, 78, 99}
    //On insere le plus petit de smin dans smax smax = {1, 6, 8, 78, 99}
    //                                          smin = {4, 7}
    //Faire une recherche dichotomique pour inserer le reste de smin dans
    //smax avec une fonction ou LowerBounds
    std::vector<int> smax;
    std::vector<int> smin;
    if(nb.size() % 2 != 0)//on gere le cas d'une suite impair//
    {
        nb.push_back(-1);
    }
    for(unsigned long i = 0; i < nb.size(); i++)//simple affichage//
    {
        std::cout << nb[i] << " ";
        std::cout << " sorting fct" << std::endl;
    }
    std::vector<std::pair<int, int> > pairs;//on creer le vecteur stockant les pairs//
    for(size_t i = 0; i < nb.size(); i += 2)//on creer les pairs et on les range dans le container(vector)//
    {
        pairs.push_back(std::make_pair(nb[i], nb[i + 1]));
    }
    for(const auto &pair : pairs)//affichage du vecteur//
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") " << std::endl;
    }
    for(size_t i = 0; i < pairs.size(); i++)//on range dans deux vecteur(smax pour les plus grands et smin pour les plus petits)
    {
        if (pairs[i].first > pairs[i].second)
        {
            smax.push_back(pairs[i].first);
            smin.push_back(pairs[i].second);
        }
        if (pairs[i].first < pairs[i].second)
        {
            smin.push_back(pairs[i].first);
            smax.push_back(pairs[i].second);
        }
    }
    std::cout << "after first sort Smax = : {";//affichage smax
    for(size_t i = 0; i < smax.size(); i++)
    {
        std::cout << smax[i] << ", ";
    }
    std::cout << "}" << std::endl;
    std::cout << "after first sort Smin = : {";//affichage smin
    for(size_t i = 0; i < smin.size(); i++)
    {
        std::cout << smin[i] << ", ";
    }
    std::cout << "}" << std::endl;
    ft_recursive(smax, smax.size());//on utilise la recursive pour trier smax//
    //std::cout << "{";
    // for(size_t i = 0; i < smax.size(); i++)
    // {
    //     std::cout << smax[i] << ", "; 
    // }
    // std::cout << "}";
    ft_min_to_minmax(smax, smin);//on envoie le plus petit de smin dans smax//
    //ft_min_to_top(smax);
    // std::cout << "{";
    // for(size_t i = 0; i < smax.size(); i++)
    // {
    //     std::cout << smax[i] << ", ";
    // }
    // std::cout << "}";
}

void check_convert_sort_print(int argc, char **argv)
{
    std::vector<int> nb = convert_args(argc, argv);
    std::cout << "Before:  ";
    for(unsigned long i = 0; i < nb.size(); i++)
    {
        std::cout << nb[i] << " ";
    }
    std::cout << '\n' << std::endl;
    sort_value(nb);
}
