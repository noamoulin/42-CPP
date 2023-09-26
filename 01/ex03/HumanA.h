/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:16:29 by noa               #+#    #+#             */
/*   Updated: 2023/06/19 00:08:28 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.h"
#include <string>
#include <iostream>

class HumanA
{
    private:
    std::string name;
    Weapon* weapon;
    
    public:
    HumanA(std::string, Weapon&);
    ~HumanA(void);
    void attack(void);
};

#endif