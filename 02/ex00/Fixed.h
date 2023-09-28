/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:53:01 by noa               #+#    #+#             */
/*   Updated: 2023/08/31 14:40:08 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{

    public:
    Fixed();
    Fixed(Fixed& Fixed);
    ~Fixed();
    Fixed &operator=(Fixed& fixed);

    int getRawBits();
    void setRawBits(int const raw);

    private:
    int bits;
    const static int fractionnal_bits = 8;
};

#endif