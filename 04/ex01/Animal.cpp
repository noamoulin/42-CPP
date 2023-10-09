/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:46:37 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:14:51 by nomoulin         ###   ########.fr       */
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

Animal::Animal(const Animal& animal)
{
	this->type = animal.type;
	std::cout << "An animal was copied\n";
}

Animal& Animal::operator=(const Animal& animal)
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