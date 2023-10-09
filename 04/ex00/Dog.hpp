/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:29:42 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:00:03 by nomoulin         ###   ########.fr       */
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
    Dog(const Dog& dog);
    Dog& operator=(const Dog& dog);
    void makeSound() const;
    std::string getType() const;
};

#endif