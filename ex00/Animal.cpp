/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:13:35 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/08 17:17:35 by juestrel         ###   ########.fr       */
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
	if (this != &toCopy)
	{
		this->_type = toCopy._type;
	}
	return (*this);
}