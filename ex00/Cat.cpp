/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:26:01 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/08 17:40:32 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor was called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy)
{
	std::cout << "Cat copy constructor was called" << std::endl;
	*this = toCopy;
}

Cat &Cat::operator=(const Cat &toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor was called" << std::endl;
}