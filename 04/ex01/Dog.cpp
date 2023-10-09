/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:59:38 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:49:06 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <cstdlib>

Dog::Dog()
{
	this->type = "Dog";
	if (!(this->brain = new Brain))
	{
		std::cerr << "Fatal error : Brain allocation failed\n";
		exit(EXIT_FAILURE);
	}
	std::cout << "A dog was created\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A dog was destroyed\n";
}

Dog::Dog(const Dog& dog)
{
	this->type = dog.getType();
	*this->brain = dog.getBrain();
	std::cout << "A dog was copied\n";
}

Dog & Dog::operator=(const Dog& dog)
{
	this->type = dog.type;
	*(this->brain) = dog.getBrain();
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

Brain Dog::getBrain(void) const
{
	return *(this->brain);
}

void Dog::brainWash(const std::string new_idea)
{
	for (int i = 0; i < IDEAS_NUMBER; i++)
		this->brain->setIdea(i, new_idea);
}