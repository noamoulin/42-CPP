/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:17:14 by noa               #+#    #+#             */
/*   Updated: 2023/06/19 00:08:11 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}