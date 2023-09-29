/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:37:42 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:09:52 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat & wcat);
		WrongCat& operator=(WrongCat const& wcat);
		void makeSound() const;
};

#endif