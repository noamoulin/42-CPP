/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:20:24 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:02:18 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A wrong animal was created\n";
	this->type = "wrong animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A wrong animal was destroyed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& wanimal)
{
	this->type = wanimal.type;
	std::cout << "A wrong animal was copied\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wanimal)
{
	this->type = wanimal.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wanimal sound ...\n";
}

std::string WrongAnimal::getType() const
{
	return this->type;
}