/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:56 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 02:54:33 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
    ClapTrap trap0("Mike");

    trap0.attack("Phillip");
    trap0.takeDamage(5);
    trap0.beRepaired(2);
    trap0.attack("Phillip");
    trap0.takeDamage(30);
    trap0.takeDamage(10);
    trap0.beRepaired(10);
    return 0;
}