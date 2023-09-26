/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:55:07 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 23:12:12 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <bits/stdc++.h>

static std::string m_itoa(int number)
{
    std::string result;
    bool is_negative(false);

    if (number == 0)
    {
        result.push_back('0');
        return result;
    }
    if (number < 0)
    {
        is_negative = true;
        number = -number;
    }
    while (number > 0) {
        int digit = number % 10;
        result.push_back('0' + digit);
        number /= 10;
    }
    if (is_negative)
        result.push_back('-');

    std::reverse(result.begin(), result.end());

    return result;
}

Zombie* ZombieHorde(int N, std::string name)
{
    Zombie* zombies = new Zombie[N];
    if (!zombies) return nullptr;

    for (int i = 0; i < N; i++)
        zombies[i].setName(name + m_itoa(i));
    return zombies;
}