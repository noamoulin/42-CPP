/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:16:51 by noa               #+#    #+#             */
/*   Updated: 2023/06/19 00:06:24 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.h"
# include <string>
# include <iostream>

class HumanB
{
    private:
    std::string name;
    Weapon* weapon;
    
    public:
    HumanB(std::string, Weapon&);
    HumanB(std::string);
    ~HumanB(void);
    void setWeapon(Weapon&);
    void attack(void);
};

#endif