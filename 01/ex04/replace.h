/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:03:42 by noa               #+#    #+#             */
/*   Updated: 2023/06/19 16:57:11 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <fstream>
# include <string>
# include <iostream>

# define WRITE_BUFFER_SIZE 100

bool replace(std::ifstream&, std::ofstream&, std::string, std::string);

#endif