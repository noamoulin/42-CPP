/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:59:38 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:07:01 by noa              ###   ########.fr       */
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

Dog::Dog(Dog& dog)
{
	this->type = dog.getType();
	std::cout << "A dog was copied\n";
}

Dog & Dog::operator=(Dog const& dog)
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