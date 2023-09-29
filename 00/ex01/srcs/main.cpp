/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:46:21 by noa               #+#    #+#             */
/*   Updated: 2023/09/23 15:04:32 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.h"
#include <iostream>
#include <string>

int main(void)
{
    PhoneBook phonebook;

    while (true)
    {
        std::string entry;

        std::cout << "PhoneBook>";
        if (!(std::getline(std::cin, entry)))
        {
            if (std::cin.eof())
                break;
            else
            {
                std::cerr << "Error" << std::endl;
                break;
            }
        }
        if (entry == "EXIT")
            break;
        else if (entry == "ADD")
            phonebook.add();
        else if (entry == "SEARCH")
            phonebook.search();
    }
    return 0;
}