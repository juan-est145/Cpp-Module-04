/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:50:52 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 09:41:49 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor was called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy)
{
	std::cout << "Dog copy constructor was called" << std::endl;
	*this = toCopy;
}

Dog &Dog::operator=(const Dog &toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof!!!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor was called" << std::endl;
}