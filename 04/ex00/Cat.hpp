/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:28:45 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:59:23 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
	std::string	type;

	public:
    Cat();
    ~Cat();
    Cat(const Cat& cat);
    Cat& operator=(const Cat& cat);
    void makeSound() const;
    std::string getType() const;
};

#endif