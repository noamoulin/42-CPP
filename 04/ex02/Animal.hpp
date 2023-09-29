/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:27:17 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 06:47:26 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
    std::string	type;

	public:
    Animal();
    virtual ~Animal();
    Animal(Animal & animal);
    Animal & operator=(Animal const & animal);

    virtual std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif