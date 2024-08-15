/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:50:52 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 11:13:46 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor was called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy)
{
	std::cout << "Dog copy constructor was called" << std::endl;
	this->_brain = new Brain(*toCopy._brain);
}

Dog &Dog::operator=(const Dog &toCopy)
{
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
		delete this->_brain;
		this->_brain = new Brain(*toCopy._brain);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof!!!" << std::endl;
}

void Dog::brainAddress(void) const
{
	std::cout << this->_brain << std::endl;
}

void Dog::printIdeas(void) const
{
	this->_brain->printIdeas();
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor was called" << std::endl;
	delete this->_brain;
}