/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:26:01 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/09 12:41:32 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor was called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy)
{
	std::cout << "Cat copy constructor was called" << std::endl;
	this->_brain = new Brain(*toCopy._brain);
}

Cat &Cat::operator=(const Cat &toCopy)
{
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
		delete this->_brain;
		this->_brain = new Brain(*toCopy._brain);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeeeoooooowww" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor was called" << std::endl;
	delete this->_brain;
}