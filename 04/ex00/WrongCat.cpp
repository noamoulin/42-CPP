/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:23:14 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:02:17 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "wrong cat";
	std::cout << "A wrong cat was created\n";
}

WrongCat::~WrongCat()
{
	std::cout << "A wrong cat was destroyed\n";
}

WrongCat::WrongCat(const WrongCat& wcat)
{
	this->type = wcat.getType();
	std::cout << "A wrong cat was copied\n";
}

WrongCat& WrongCat::operator=(const WrongCat& wcat)
{
	this->type = wcat.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "wmeoooow... wmeoooow... (some cat sounds that sounds wrong)\n";
}