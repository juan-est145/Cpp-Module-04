/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:51:18 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/09 11:53:12 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "The WrongAnimal default constructor was called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
	std::cout << "The WrongAnimal copy constructor was called" << std::endl;
	*this = toCopy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopy)
{
	std::cout << "The WrongAnimal copy assignment operator was called" << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "*Weird, undefined WrongAnimal noises*" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor was called" << std::endl;
}
