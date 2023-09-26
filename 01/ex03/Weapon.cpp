/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:20 by noa               #+#    #+#             */
/*   Updated: 2023/06/18 23:43:04 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}