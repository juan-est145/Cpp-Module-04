/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:38:56 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 09:42:00 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal *animals[20];

	for (unsigned int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();

		else
			animals[i] = new Dog();
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (unsigned int i = 0; i < 20; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	const Cat *cat1 = new Cat();
	const Cat *cat2 = new Cat();
	const Dog *dog1 = new Dog();
	const Dog *dog2 = new Dog();

	cat1->brainAddress();
	cat2->brainAddress();
	dog1->brainAddress();
	dog2->brainAddress();

	delete cat1;
	delete cat2;
	delete dog1;
	delete dog2;

	return (0);
}