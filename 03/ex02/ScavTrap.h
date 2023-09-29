/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:56:58 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 22:06:29 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    private:
    bool gate_keeper = false;

    public:
    ScavTrap(void);
    ScavTrap(const ScavTrap&);
    ScavTrap(std::string);
    ~ScavTrap(void);

    void attack(const std::string&);
    void guardGate(void);

    ScavTrap& operator=(const ScavTrap&);
};

#endif
