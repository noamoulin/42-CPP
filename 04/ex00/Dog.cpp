/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:59:38 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:00:43 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "A dog was created\n";
}

Dog::~Dog()
{
	std::cout << "A dog was destroyed\n";
}

Dog::Dog(const Dog& dog)
{
	this->type = dog.getType();
	std::cout << "A dog was copied\n";
}

Dog& Dog::operator=(const Dog& dog)
{
	this->type = dog.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof ! woof ! (some dog song)\n";
}

std::string Dog::getType() const
{
	return this->type;
}