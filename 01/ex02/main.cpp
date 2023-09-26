/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:34:49 by noa               #+#    #+#             */
/*   Updated: 2023/06/18 22:55:21 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "&string = " << &string << std::endl
              << "stringPTR = " << stringPTR << std::endl
              << "stringREF = " << &stringREF << std::endl
              << std::endl;

    std::cout << "string = " << string << std::endl
              << "stringPTR --> " << *stringPTR << std::endl
              << "stringREF --> " << stringREF << std::endl;
}