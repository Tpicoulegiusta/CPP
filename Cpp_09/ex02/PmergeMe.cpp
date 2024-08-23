/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:37:35 by tpicoule          #+#    #+#             */
/*   Updated: 2024/08/22 10:02:57 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <algorithm>
#include <ctime>


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
    int k = 0;
    for(size_t i = 0; i < smin.size(); i++)
    {
        if(smin[i] < 0)
            smin.pop_back();
    }
    int j = smin[0];
    for(size_t i = 0; i < smin.size(); i++)
    {
        if(smin[i] < j)
        {
            j = smin[i];
            k = i;
        }
    }
    smax.insert(smax.begin(), j);
    smin.erase(smin.begin() + k);
}

void ft_min_to_max(std::vector<int> &smax, std::vector<int> &smin)
{
    for(size_t i = 0; i < smin.size(); i++)
    {
        std::vector<int>::iterator it = std::lower_bound(smax.begin(), smax.end(), smin[i]);
        smax.insert(it, smin[i]);
        smin.erase(smin.begin() + i);
        i--;//tient compte de la suppression//
    }
}


void sort_value_vec(std::vector<int> &nb)
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
    std::vector<std::pair<int, int> > pairs;//on creer le vecteur stockant les pairs//
    for(size_t i = 0; i < nb.size(); i += 2)//on creer les pairs et on les range dans le container(vector)//
    {
        pairs.push_back(std::make_pair(nb[i], nb[i + 1]));
    }
    for(size_t i = 0; i < pairs.size(); i++)//on range dans deux vecteur(smax pour les plus grands et smin pour les plus petits)
    {
        if (pairs[i].first >= pairs[i].second)
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
    ft_recursive(smax, smax.size());//on utilise la recursive pour trier smax//
    ft_min_to_minmax(smax, smin);//on envoie le plus petit de smin dans smax//
    ft_min_to_max(smax, smin);
    std::cout << "After:  ";
    for(size_t i = 0; i < smax.size(); i++)
    {
        std::cout << smax[i] << " ";
    }
    std::cout << std::endl;
}

void ft_recursive_deque(std::deque<int> &smax, int n)
{
    if(n <= 1)//si 1 element ou si deja trie//
        return;
    ft_recursive_deque(smax, n - 1);//on reduit la taille du vecteur pour le ranger petit a petit grace a la recursive//
    int last = smax[n - 1];
    int j = n - 2;
    while(j >= 0 && smax[j] > last)//on compare notre sous-vecteur, on regrade ou va le chiffre a inserer et on decale tout a sa droite si besoin//
    {
        smax[j + 1] = smax[j];
        j--;
    }
    smax[j + 1] = last;
}

void ft_min_to_minmax_deque(std::deque<int> &smax, std::deque<int> &smin)
{
    int k = 0;
    for(size_t i = 0; i < smin.size(); i++)
    {
        if(smin[i] < 0)
            smin.pop_back();
    }
    int j = smin[0];
    for(size_t i = 0; i < smin.size(); i++)
    {
        if(smin[i] < j)
        {
            j = smin[i];
            k = i;
        }
    }
    smax.insert(smax.begin(), j);
    smin.erase(smin.begin() + k);
}


void ft_min_to_max_deque(std::deque<int> &smax, std::deque<int> &smin)
{
    for(size_t i = 0; i < smin.size(); i++)
    {
        std::deque<int>::iterator it = std::lower_bound(smax.begin(), smax.end(), smin[i]);
        smax.insert(it, smin[i]);
        smin.erase(smin.begin() + i);
        i--;//tient compte de la suppression//
    }
}


void sort_value_deq(std::deque<int> &deqVersion)
{
    // for(size_t i = 0; i != deqVersion.size(); i++)
    // {
    //     std::cout << deqVersion[i] << std::endl;
    // }
    std::deque<int> smax;
    std::deque<int> smin;
    if(deqVersion.size() % 2 != 0)//on gere le cas d'une suite impair//
    {
        deqVersion.push_back(-1);
    }
    std::deque<std::pair<int, int> > pairs;//on creer le vecteur stockant les pairs//
    for(size_t i = 0; i < deqVersion.size(); i += 2)//on creer les pairs et on les range dans le container(vector)//
    {
        pairs.push_back(std::make_pair(deqVersion[i], deqVersion[i + 1]));
    }
    for(size_t i = 0; i < pairs.size(); i++)//on range dans deux vecteur(smax pour les plus grands et smin pour les plus petits)
    {
        if (pairs[i].first >= pairs[i].second)
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
    // for (auto element : deqVersion)
    //     std::cout << element << " "; 
    // std::cout << std::endl;
    ft_recursive_deque(smax, smax.size());//on utilise la recursive pour trier smax//
    ft_min_to_minmax_deque(smax, smin);//on envoie le plus petit de smin dans smax//
    ft_min_to_max_deque(smax, smin);
    //std::cout << "{";
    // for(size_t i = 0; i < smax.size(); i++)
    // {
    //     std::cout << smax[i];
    //     std::cout << ", ";
    // }
    // std::cout << "}";
    // std::cout << std::endl;
    // std::cout << "{";
    // for(size_t i = 0; i < smin.size(); i++)
    // {
    //     std::cout << smin[i];
    //     std::cout << ", ";
    // }
    // std::cout << "}";
  }


void check_convert_sort_print(int argc, char **argv)
{
    std::vector<int> nb = convert_args(argc, argv);
    int j = 0;
    for(size_t i = 0; i < nb.size(); i++)
        j++;
    if(j <= 1)
        return ;
    std::cout << "Before: ";
    for(unsigned long i = 0; i < nb.size(); i++)
    {
        std::cout << nb[i] << " ";
    }
    std::cout << std::endl;
    std::deque<int> deqVersion(nb.begin(), nb.end());
    std::clock_t start_vec = std::clock();
    sort_value_vec(nb);
	std::clock_t end_vec = std::clock();
    std::clock_t start_deq = std::clock();
    sort_value_deq(deqVersion);
	std::clock_t end_deq = std::clock();
    
    double vecTime = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1000.0;
    double deqTime = static_cast<double>(end_deq - start_deq) / CLOCKS_PER_SEC * 1000.0;

	std::cout << "Time to process a range of " << nb.size()
			<< " elements with a vector: " << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << nb.size()
			<< " elements with a vector: " << deqTime << " us" << std::endl;
}
