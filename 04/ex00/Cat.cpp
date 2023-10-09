/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:53:31 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:00:32 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "A cat was created\n";
}

Cat::~Cat()
{
	std::cout << "A cat was destroyed\n";
}

Cat::Cat(const Cat& cat)
{
	this->type = cat.getType();
	std::cout << "A cat was copied\n";
}

Cat& Cat::operator=(const Cat& cat)
{
	this->type = cat.type;
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