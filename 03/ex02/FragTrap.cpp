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

FragTrap::FragTrap(const FragTrap& trap)
{
    name = trap.name;
    energy_points = trap.energy_points;
    hit_points = trap.hit_points;
    attack_damage = trap.attack_damage;
    std::cout << "FragTrap " << name << " created" << std::endl;
}


FragTrap::~FragTrap(void)
{
     std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << name << " : high fives guys !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& clap)
{
    name = clap.name;
    hit_points = clap.hit_points;
    energy_points = clap.energy_points;
    attack_damage = clap.attack_damage;
    return *this;
}
