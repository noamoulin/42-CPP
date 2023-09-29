/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:20:24 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:31:42 by noa              ###   ########.fr       */
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

WrongAnimal::WrongAnimal(WrongAnimal& wanimal)
{
	this->type = wanimal.type;
	std::cout << "A wrong animal was copied\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const& wanimal)
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