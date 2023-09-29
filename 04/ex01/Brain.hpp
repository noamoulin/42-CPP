/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:50:13 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 04:29:03 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define IDEAS_NUMBER 100

class Brain
{
	private:
    std::string	ideas[IDEAS_NUMBER];
	public:
    Brain();
    ~Brain();
    Brain(Brain& brain);
    Brain& operator=(Brain const& brain);
    std::string getIdea(int index) const;
    void setIdea(int index, std::string idea);
};

#endif
