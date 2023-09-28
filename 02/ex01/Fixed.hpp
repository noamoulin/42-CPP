/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:53:01 by noa               #+#    #+#             */
/*   Updated: 2023/08/31 23:28:46 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

    public:
    Fixed();
    Fixed(const Fixed& Fixed);
    Fixed(const int integer);
    Fixed(const float floater);
    ~Fixed();
    Fixed& operator=(const Fixed& fixed);

    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

    private:
    int bits;
    const static int fractionnal_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif