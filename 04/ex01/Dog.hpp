/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:29:42 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 05:32:43 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
	std::string	type;
    Brain* brain;

	public:
    Dog();
    ~Dog();
    Dog(Dog & dog);
    Dog& operator=(Dog const& dog);
    void makeSound() const;
    std::string getType() const;
    Brain getBrain(void) const;
    void brainWash(std::string new_idea);
};

#endif