/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:37 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 21:31:33 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap
{
    protected:
    std::string name;
    unsigned int hit_points = 10;
    unsigned int energy_points = 10;
    unsigned int attack_damage = 0;

    public:
    ClapTrap(void);
    ClapTrap(const ClapTrap&);
    ClapTrap(const std::string);
    ~ClapTrap(void);

    void attack(const std::string&);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    ClapTrap& operator=(const ClapTrap&);
};

#endif
