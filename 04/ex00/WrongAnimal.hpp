/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:32:41 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 03:10:41 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
    std::string	type;

	public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal & wanimal);
    WrongAnimal& operator=(WrongAnimal const& wanimal);

    void makeSound() const;
    std::string getType() const;
};

#endif