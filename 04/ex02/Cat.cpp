/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:53:31 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 04:48:42 by noa              ###   ########.fr       */
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
		exit(1);
	}
	std::cout << "A cat was created\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A cat was destroyed\n";
}

Cat::Cat(Cat& cat)
{
	this->type = cat.getType();
	*this->brain = cat.getBrain();
	std::cout << "A cat was copied\n";
}

Cat& Cat::operator=(Cat const& cat)
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
	return *this->brain;
}