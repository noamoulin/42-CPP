/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:27:17 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 11:56:20 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class AAnimal
{
	protected:
    std::string	type;

	public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal& AAnimal);
    AAnimal& operator=(const AAnimal& AAnimal);

    virtual std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif
