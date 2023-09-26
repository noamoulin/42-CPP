/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:04:33 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 01:21:09 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(void)
{
    complains_functions[0] = &Harl::debug;
    complains_functions[1] = &Harl::info;
    complains_functions[2] = &Harl::warning;
    complains_functions[3] = &Harl::error;

    complains_keys[0] = "DEBUG";
    complains_keys[1] = "INFO";
    complains_keys[2] = "WARNING";
    complains_keys[3] = "ERROR";
}

Harl::~Harl(void)
{
}

Harl& Harl::operator=(const Harl& harl)
{
    return *this;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
    "-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You"
     "didn t put enough bacon in my burger ! If you did, I wouldn t be asking"
      "for more !" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I ve been"
     "coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string entry)
{
    for (int i = 0; i < 4; i++)
    {
        if (complains_keys[i] == entry)
        {
            (this->*complains_functions[i])();
            break;
        }
    }
}