/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:28:45 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 05:31:21 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
	std::string	type;
    Brain* brain;

	public:
    Cat();
    ~Cat();
    Cat(Cat & dog);
    Cat& operator=(Cat const & cat);
    void makeSound() const;
    std::string getType() const;
    Brain getBrain(void) const;
};

#endif