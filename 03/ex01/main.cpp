/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:56 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 03:25:52 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void)
{
    ClapTrap trap0("Mike");
    ScavTrap trap1("Phillip");

    trap0.attack("Phillip");
    trap1.takeDamage(0);
    trap1.attack("Mike");
    trap0.takeDamage(20);
    trap0.attack("Phillip");
    trap1.guardGate();

    return 0;
}