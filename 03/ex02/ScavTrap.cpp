/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:57:01 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 22:20:59 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"


ScavTrap::ScavTrap(void)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    name = "a ScavTrap";
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    this->name = name;
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& trap)
{
    name = trap.name;
    energy_points = trap.energy_points;
    hit_points = trap.hit_points;
    attack_damage = trap.attack_damage;
    std::cout << "ScavTrap " << name << " created" << std::endl;
}


ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& name)
{
    std::cout << "ScavTrap " << this->name << " attacks " << name << ", causing " 
              << attack_damage << " points of damage !" << std::endl;
    --energy_points;
}

void ScavTrap::guardGate(void)
{
    gate_keeper = true;
    std::cout << "ScavTrap " << name << " entered in gate keeper mode"
              << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& clap)
{
    name = clap.name;
    hit_points = clap.hit_points;
    energy_points = clap.energy_points;
    attack_damage = clap.attack_damage;
    return *this;
}