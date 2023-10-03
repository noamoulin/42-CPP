/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:30:52 by noa               #+#    #+#             */
/*   Updated: 2023/10/01 06:09:18 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{/*
    Fixed a;
	Fixed b(5.05f);
	Fixed c(2);

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << "b + c = " << Fixed(b + c) << std::endl;
	std::cout << "b - c = " << Fixed(b - c) << std::endl;
	std::cout << "c - b = " << Fixed(c - b) << std::endl;
	std::cout << "b * c = " << Fixed(b * c) << std::endl;
	std::cout << "b / c = " << Fixed(b / c) << std::endl;
	std::cout << "c / b = " << Fixed(c / b) << std::endl;

	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;*/

	Fixed a = 5;
	Fixed b = 2;

	std::cout << a / b;

    return 0;
}