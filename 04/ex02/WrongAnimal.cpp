/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:20:24 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 13:54:40 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A wrong AAnimal was created\n";
	this->type = "wrong AAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A wrong AAnimal was destroyed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& wAAnimal)
{
	this->type = wAAnimal.type;
	std::cout << "A wrong AAnimal was copied\n";
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& wAAnimal)
{
	this->type = wAAnimal.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WAAnimal sound ...\n";
}

std::string WrongAnimal::getType() const
{
	return this->type;
}