/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:11:25 by noa               #+#    #+#             */
/*   Updated: 2023/09/29 05:57:25 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

static void show_ideas(Dog& dog)
{
	Brain brain;

	brain = dog.getBrain();
	for (int i = 0; i < IDEAS_NUMBER; i++)
		std::cout << brain.getIdea(i) << std::endl;
}

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 4) animals[i] = new Cat;
		else animals[i] = new Dog;
	}

	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "\n\n";

	Dog chien0;
	Dog chien1;

	std::cout << "\n\n";

	show_ideas(chien0);

	std::cout << "\n";

	chien1 = chien0;

	std::cout << "\n\n";

	show_ideas(chien1);

	std::cout << "\n\n";

	chien1.brainWash("Tant pis je meurs");

	std::cout << "\n\n";

	show_ideas(chien1);

	std::cout << "\n\n";

	show_ideas(chien0);

	std::string test[10];
	std::string test1[10];

	return 0;
}
