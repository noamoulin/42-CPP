/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:27:47 by noa               #+#    #+#             */
/*   Updated: 2023/09/28 02:46:42 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point(void);
	Point& operator=(const Point& point);
	Fixed const getX(void) const;
	Fixed const getY(void) const;

    private:
	Fixed const x;
	Fixed const y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

# endif