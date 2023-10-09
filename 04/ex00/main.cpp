/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 03:11:25 by noa               #+#    #+#             */
/*   Updated: 2023/10/09 12:09:49 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal; // PROTEGER
	const Animal* dog = new Dog;
	const Animal* cat = new Cat;

	std::cout << std::endl;
	std::cout << "Dog->getType : " << dog->getType() << std::endl;
	std::cout << "Cat->getType : " << cat->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;
}