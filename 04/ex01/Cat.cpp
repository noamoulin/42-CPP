/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:53:31 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:48:05 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <cstdlib>

Cat::Cat()
{
	this->type = "Cat";
	if (!(this->brain = new Brain))
	{
		std::cerr << "Fatal error : Brain allocation failed\n";
		exit(EXIT_FAILURE);
	}
	std::cout << "A cat was created\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A cat was destroyed\n";
}

Cat::Cat(const Cat& cat)
{
	this->type = cat.getType();
	*(this->brain) = cat.getBrain();
	std::cout << "A cat was copied\n";
}

Cat& Cat::operator=(const Cat& cat)
{
	this->type = cat.type;
	*this->brain = cat.getBrain();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meoooow... meoooow... (some cat song)\n";
}

std::string Cat::getType() const
{
	return this->type;
}

Brain Cat::getBrain(void) const
{
	return *(this->brain);
}