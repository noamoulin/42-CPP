/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:41 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 21:33:17 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void)
{
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
    name = "a ClapTrap";
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
    this->name = name;
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& trap)
{
    name = trap.name;
    energy_points = trap.energy_points;
    hit_points = trap.hit_points;
    attack_damage = trap.attack_damage;
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& name)
{
    std::cout << "ClapTrap " << this->name << " attacks " << name << ", causing " 
              << attack_damage << " points of damage !" << std::endl;
    --energy_points;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    start:
    if (amount <= hit_points)
    {
        hit_points -= amount;
        std::cout << name << " took " << amount << " damages" << std::endl;
    }
    else if (hit_points > 0)
    {
        amount = hit_points;
        goto start;
    }
    else
        std::cout << name << " can't take more damages (dead)" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hit_points += amount;
    std::cout << name << " has been repaired : + " << amount << " hit points" 
              << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
    name = clap.name;
    hit_points = clap.hit_points;
    energy_points = clap.energy_points;
    attack_damage = clap.attack_damage;
    return *this;
}