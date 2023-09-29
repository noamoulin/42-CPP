/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:07:55 by noa               #+#    #+#             */
/*   Updated: 2023/09/25 20:02:10 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string megaphone(std::string str)
{
    std::string cap_str;

    for (size_t i = 0; i < str.length(); i++)
        cap_str.push_back(toupper(str[i]));
    return cap_str;
}

int main(int ac, char ** av)
{
    std::string str;

    if (ac == 1)
        str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (size_t i = 1; i < ac; i++)
        str.append(megaphone(std::string(av[i])));
    std::cout << str << std::endl;
    return (EXIT_SUCCESS);
}
