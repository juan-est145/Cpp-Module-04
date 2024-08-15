/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:44:05 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 20:01:01 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::_initMaterias(void)
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_knownMaterias[i] = NULL;
}

void MateriaSource::_copyMaterias(const MateriaSource &toCopy)
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_knownMaterias[i] = toCopy._knownMaterias[i];
}

void MateriaSource::_destroyMaterias(void)
{
	for (unsigned int i = 0; i < this->_size; i++)
	{
		if (this->_knownMaterias[i] != NULL)
			delete this->_knownMaterias[i];
	}
}

MateriaSource::MateriaSource(void)
{
	this->_size = (unsigned int)(sizeof(this->_knownMaterias) / sizeof(this->_knownMaterias[0]));
	this->_initMaterias();
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	
}