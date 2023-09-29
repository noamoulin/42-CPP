/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:46:37 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:08:04 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal was created\n";
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "An animal was destroyed\n";
}

Animal::Animal(Animal& animal)
{
	this->type = animal.type;
	std::cout << "An animal was copied\n";
}

Animal& Animal::operator=(Animal const& animal)
{
	this->type = animal.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound ...\n";
}

std::string Animal::getType() const
{
	return this->type;
}