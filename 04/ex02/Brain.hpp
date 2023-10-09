/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:50:13 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:50:59 by nomoulin         ###   ########.fr       */
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
    Brain(const Brain& brain);
    Brain& operator=(const Brain& brain);
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string idea);
};

#endif
