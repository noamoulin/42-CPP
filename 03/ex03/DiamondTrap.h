/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 01:55:37 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 02:51:23 by noa              ###   ########.fr       */
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

	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& trap);

	DiamondTrap& operator=(const DiamondTrap& trap);

	~DiamondTrap();

	void attack(const std::string& name);
	void whoAmI();
};

#endif