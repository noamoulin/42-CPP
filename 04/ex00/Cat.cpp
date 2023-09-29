/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:53:31 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:07:42 by noa              ###   ########.fr       */
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

Cat::Cat(Cat& cat)
{
	this->type = cat.getType();
	std::cout << "A cat was copied\n";
}

Cat & Cat::operator=(Cat const& cat)
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