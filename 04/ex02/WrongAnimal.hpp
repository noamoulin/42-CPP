/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:32:41 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 13:54:40 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_AAnimal_HPP
# define WRONG_AAnimal_HPP

# include <iostream>

class WrongAnimal
{
	protected:
    std::string	type;

	public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal& wAAnimal);
    WrongAnimal& operator=(const WrongAnimal& wAAnimal);

    void makeSound() const;
    std::string getType() const;
};

#endif