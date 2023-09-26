/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:10:22 by noa               #+#    #+#             */
/*   Updated: 2023/06/18 22:27:03 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
    private:
    std::string name;

    public:
    Zombie(void);
    void setName(std::string);
    void announce(void);
    ~Zombie(void);
};

Zombie *ZombieHorde(int N, std::string name);

#endif