/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:28:20 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 23:25:01 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"
#include <fstream>
#include <iostream>

int main(int ac, char ** av)
{
    if (ac != 4)
    {
        std::cout << "Mauvaise entree utilisateur. utilisation : replace <fichier> <str_from> <str_to>" << std::endl;
        return 1;
    }

    std::ifstream file1;
    std::ofstream file2;

    file1.open(std::string(av[1]));
    if (!file1)
    {
    	std::cerr << "Erreur pendant l'ouverture du fichier : " << std::string(av[1]) << std::endl;
    	return 1;
    }
    file2.open(std::string(av[1]) + ".replace");
    if (!file2)
    {
    	std::cerr << "Erreur pendant la creation du fichier" << std::endl;
    	file1.close();
    	return 1;
    }

    replace(file1, file2, av[2], av[3]);
    file1.close();
    file2.close();
    return 0;
}
