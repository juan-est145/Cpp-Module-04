/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:09:21 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 09:41:54 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	std::cout << "Default constructor of ice was called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &toCopy) : AMateria(toCopy)
{
	std::cout << "Copy constructor of ice was called" << std::endl;
	*this = toCopy;
}

Ice &Ice::operator=(const Ice &toCopy)
{
	std::cout << "Copy assignment constructor of ice was called" << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

Ice::~Ice(void)
{
	std::cout << "Destructor of ice was called" << std::endl;
}