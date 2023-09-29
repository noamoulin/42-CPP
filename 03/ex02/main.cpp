/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:56 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 22:38:30 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main(void)
{
    ClapTrap trap0("Mike");
    ScavTrap trap1("Phillip");
    FragTrap trap2("Blackie");

    trap0.attack("Phillip");
    trap1.takeDamage(0);
    trap1.attack("Mike");
    trap0.takeDamage(20);
    trap0.attack("Phillip");
    trap1.guardGate();
    trap2.attack("Mike");
    trap0.takeDamage(20);
    trap0.attack("Blackie");
    trap2.takeDamage(0);
    trap2.highFivesGuys();

    return 0;
}