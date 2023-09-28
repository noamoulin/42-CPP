/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:55:19 by noa               #+#    #+#             */
/*   Updated: 2023/08/31 14:48:05 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    bits = 0;
}

Fixed::Fixed(Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->bits = fixed.getRawBits();
}

Fixed& Fixed::operator=(Fixed& fixed)
{
    std::cout << "Copy assignement operator called" << std::endl;
    bits = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return bits;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "SetRawBits member function called" << std::endl;
    bits = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
