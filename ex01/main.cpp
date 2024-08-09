/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:38:56 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/09 17:20:32 by juestrel         ###   ########.fr       */
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
	return (0);
}