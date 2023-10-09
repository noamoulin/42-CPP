/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:32:41 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:02:18 by nomoulin         ###   ########.fr       */
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
    WrongAnimal(const WrongAnimal& wanimal);
    WrongAnimal& operator=(const WrongAnimal& wanimal);

    void makeSound() const;
    std::string getType() const;
};

#endif