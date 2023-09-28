/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:30:59 by noa               #+#    #+#             */
/*   Updated: 2023/09/28 02:35:07 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0)) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {}

Point::~Point(void) {}

Point& Point::operator=(const Point& point)
{
	(void)point;
	std::cout << "Assignment of const variables impossible, values will stay the same as in the default constructor." << std::endl;
	return *this;
}

Fixed const Point::getX(void) const
{
	return this->x;
}

Fixed const Point::getY(void) const
{
	return this->y;
}