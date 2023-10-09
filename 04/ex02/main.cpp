/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:11:25 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 13:54:05 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

static void show_ideas(Dog& dog)
{
	Brain brain;

	brain = dog.getBrain();
	for (int i = 0; i < IDEAS_NUMBER; i++)
		std::cout << brain.getIdea(i) << std::endl;
}

int main()
{
	//AAnimal test;
	AAnimal *AAnimals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 4) AAnimals[i] = new Cat;
		else AAnimals[i] = new Dog;
	}

	for (int i = 0; i < 10; i++)
		delete AAnimals[i];

	std::cout << "\n\n";

	Dog	* chien0 = new Dog;
	Dog	* chien1 = new Dog;

	std::cout << "\n\n";

	show_ideas(*chien0);

	std::cout << "\n";

	*chien1 = *chien0;

	std::cout << "\n\n";

	show_ideas(*chien1);

	std::cout << "\n\n";

	chien1->brainWash("Tant pis je meurs");

	std::cout << "\n\n";

	show_ideas(*chien1);

	std::cout << "\n\n";

	show_ideas(*chien0);

	delete chien0;
	delete chien1;

	return 0;
}
