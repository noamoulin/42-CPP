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
    gate_keeper = false;
    name = "a ScavTrap";
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    gate_keeper = false;
    this->name = name;
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& trap) : ClapTrap(trap), gate_keeper(trap.gate_keeper)
{
    std::cout << "ScavTrap " << trap.name << " copied" << std::endl;
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
    ClapTrap::operator=(clap);
    this->gate_keeper = clap.gate_keeper;
    return *this;
}