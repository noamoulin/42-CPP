/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:28:45 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:09:55 by noa              ###   ########.fr       */
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
    Cat(Cat & dog);
    Cat& operator=(Cat const & cat);
    void makeSound() const;
    std::string getType() const;
};

#endif