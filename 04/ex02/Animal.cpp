/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:46:37 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:05:43 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "An AAnimal was created\n";
	this->type = "AAnimal";
}

AAnimal::~AAnimal()
{
	std::cout << "An AAnimal was destroyed\n";
}

AAnimal::AAnimal(const AAnimal& AAnimal)
{
	this->type = AAnimal.type;
	std::cout << "An AAnimal was copied\n";
}

AAnimal& AAnimal::operator=(const AAnimal& AAnimal)
{
	this->type = AAnimal.type;
	return *this;
}

std::string AAnimal::getType() const
{
	return this->type;
}