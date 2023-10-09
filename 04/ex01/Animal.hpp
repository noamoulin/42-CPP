/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:27:17 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:56:20 by nomoulin         ###   ########.fr       */
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
    Animal(const Animal& animal);
    Animal& operator=(const Animal& animal);

    virtual std::string getType() const;
    virtual void makeSound() const;
};

#endif