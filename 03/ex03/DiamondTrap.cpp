/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:37 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 02:51:23 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("a_DiamondTrap_clap_name"), ScavTrap(name), FragTrap(name), name("a_DiamondTrap")
{
	std::cout << "DiamondTrap " << name << " created" << std::endl;
	this->FragTrap::hit_points = 100;
	this->FragTrap::attack_damage = 30;
	this->ScavTrap::energy_points = 50;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "DiamondTrap " << name << " created" << std::endl;
	this->FragTrap::hit_points = 100;
	this->FragTrap::attack_damage = 30;
	this->ScavTrap::energy_points = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap) : ClapTrap(trap), ScavTrap(trap), FragTrap(trap), name(trap.name)
{
	ClapTrap::name = trap.name + "_clap_name";
	std::cout << "DiamondTrap " << trap.name << " copied" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& trap)
{
	ClapTrap::operator=(trap);
	ScavTrap();
	FragTrap();
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& name)
{
	this->ScavTrap::attack(name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "whoAmI(): I am DiamondTrap " << this->name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}