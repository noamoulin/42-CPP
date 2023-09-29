/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:04:46 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 22:22:09 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"

class FragTrap : public ClapTrap
{
    private:

    public:
    FragTrap(void);
    FragTrap(const FragTrap&);
    FragTrap(const std::string&);
    ~FragTrap(void);

    void highFivesGuys(void);

    FragTrap& operator=(const FragTrap&);
};

#endif