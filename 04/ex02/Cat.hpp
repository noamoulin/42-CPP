/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:28:45 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 13:54:05 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	private:
	std::string	type;
    Brain* brain;

	public:
    Cat();
    ~Cat();
    Cat(const Cat& cat);
    Cat& operator=(const Cat& cat);
    void makeSound() const;
    std::string getType() const;
    Brain getBrain(void) const;
};

#endif