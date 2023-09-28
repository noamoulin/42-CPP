/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:55:19 by noa               #+#    #+#             */
/*   Updated: 2023/09/28 02:21:01 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    bits = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
    this->bits = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    bits = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    return bits;
}

void Fixed::setRawBits(int const raw)
{
    bits = raw;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int integer)
{
    bits = integer << fractionnal_bits;
}

Fixed::Fixed(const float floater)
{
    bits = roundf(floater * (float)(1 << fractionnal_bits));
}

float Fixed::toFloat() const
{
    return (float)bits / (float)(1 << fractionnal_bits);
}

int Fixed::toInt(void) const
{
    return (int)this->toFloat();
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

//////////////////////////////////////////////////////////////////////////////////////////////////

bool Fixed::operator>(const Fixed& fixed)
{
	return this->bits > fixed.bits;
}

bool Fixed::operator<(const Fixed& fixed)
{
	return this->bits < fixed.bits;
}

bool Fixed::operator>=(const Fixed& fixed)
{
	return this->bits >= fixed.bits;
}

bool Fixed::operator<=(const Fixed& fixed)
{
	return this->bits <= fixed.bits;
}

bool Fixed::operator==(const Fixed& fixed)
{
	return this->bits == fixed.bits;
}

bool Fixed::operator!=(const Fixed& fixed)
{
	return this->bits != fixed.bits;
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits(this->bits + fixed.bits);
	return ret;
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits(this->bits - fixed.bits);
	return ret;
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits(this->bits * fixed.bits >> fractionnal_bits);
	return ret;
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed ret;

	ret.setRawBits((this->bits * (1 << fractionnal_bits)) / fixed.bits);
	return ret;
}

Fixed& Fixed::operator++()
{
	this->bits++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->bits--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.bits > b.bits)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.bits < b.bits)
		return b;
	return a;
}
