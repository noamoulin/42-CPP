/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:03:16 by noa               #+#    #+#             */
/*   Updated: 2023/06/18 23:38:44 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
    private:
    std::string type;

    public:
    Weapon(std::string type);
    Weapon(void);
    const std::string& getType(void);
    void setType(std::string);
    ~Weapon(void);
};

#endif