/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:37 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 02:51:23 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap
{
    protected:
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;
    std::string name;

    public:
    ClapTrap(void);
    ClapTrap(const std::string);
    ClapTrap(const ClapTrap& clap);
    ~ClapTrap(void);

    void attack(const std::string&);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    ClapTrap& operator=(const ClapTrap&);
};

#endif