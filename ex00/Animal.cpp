/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:13:35 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/09 12:41:29 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "The animal default constructor was called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &toCopy)
{
	std::cout << "The animal copy constructor was called" << std::endl;
	*this = toCopy;
}

Animal &Animal::operator=(const Animal &toCopy)
{
	std::cout << "The animal copy assignment operator was called" << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "*Weird, undefined animal noises*" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor was called" << std::endl;
}
