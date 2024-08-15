/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:25:22 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 09:27:10 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	std::cout << "Default constructor of cure was called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &toCopy) : AMateria(toCopy)
{
	std::cout << "Copy constructor of Cure was called" << std::endl;
	*this = toCopy;
}

Cure &Cure::operator=(const Cure &toCopy)
{
	std::cout << "Copy assignment constructor of Cure was called" << std::endl;
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

Cure::~Cure(void)
{
	std::cout << "Destructor of Cure was called" << std::endl;
}