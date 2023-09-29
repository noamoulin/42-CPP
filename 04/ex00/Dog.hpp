/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:29:42 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:10:02 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
	std::string	type;

	public:
    Dog();
    ~Dog();
    Dog(Dog & dog);
    Dog& operator=(Dog const& dog);
    void makeSound() const;
    std::string getType() const;
};

#endif