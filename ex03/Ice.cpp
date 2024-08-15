/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:09:21 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 20:32:49 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &toCopy) : AMateria(toCopy)
{
	*this = toCopy;
}

Ice &Ice::operator=(const Ice &toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Destructor of ice was called" << std::endl;
}