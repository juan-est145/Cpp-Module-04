/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:46:37 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 09:41:53 by juestrel         ###   ########.fr       */
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

AMateria::~AMateria(void) {}