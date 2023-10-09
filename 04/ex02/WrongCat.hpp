/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:37:42 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:53:19 by nomoulin         ###   ########.fr       */
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
		WrongCat(const WrongCat& wcat);
		WrongCat& operator=(const WrongCat& wcat);
		void makeSound() const;
};

#endif