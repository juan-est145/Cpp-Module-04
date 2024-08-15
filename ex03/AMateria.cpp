/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:46:37 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 10:09:10 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "default";
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &toCopy)
{
	*this = toCopy;
}

AMateria &AMateria::operator=(const AMateria &toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Can't use this method, this is an abstract class" << std::endl;
	(void)target;
}

AMateria::~AMateria(void) {}