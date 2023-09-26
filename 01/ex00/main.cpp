/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:34:02 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 23:04:26 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie* zombie = newZombie("Noa");
    if (!zombie) return 1;

    zombie->announce();
    randomChump("Robert");

    delete zombie;
    
    return 0;
}