/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:04:42 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 22:08:43 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(void)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    name = "a FragTrap";
    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    this->name = name;
    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& trap) : ClapTrap(trap)
{
    std::cout << "FragTrap " << name << " created" << std::endl;
}


FragTrap::~FragTrap(void)
{
     std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " : high fives guys !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& clap)
{
    ClapTrap::operator=(clap);
    return *this;
}
