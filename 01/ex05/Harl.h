/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:04:37 by noa               #+#    #+#             */
/*   Updated: 2023/06/22 23:14:44 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

class Harl
{
    private:
    void (Harl::*complains_functions[4])(void);
    std::string complains_keys[4];

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:
    Harl(void);
    ~Harl(void);
    Harl& operator=(const Harl&);
    void complain(std::string level);
};

#endif