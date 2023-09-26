/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:04:40 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 01:24:40 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include <unistd.h>
#include <random>

int main(void)
{
    Harl harl;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int previous_level = -1;
    int level;

    while (true)
    {
        random:
        level = rand() % 4;
        if (level == previous_level)
            goto random;
        previous_level = level;
        harl.complain(levels[level]);
        sleep(1);
    }
}