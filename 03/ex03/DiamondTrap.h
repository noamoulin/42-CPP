/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:45:43 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 22:50:17 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.h"
# include "ScavTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
    std::string name;
};

#endif