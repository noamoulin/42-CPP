/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:54:16 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 23:13:08 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie* zombies = ZombieHorde(7, "Kevin");
    if (!zombies) return 1;

    for (int i = 0; i < 7; i++)
        zombies[i].announce();
    
    delete[] zombies;
    return 0;
}