/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:44:05 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 20:19:34 by juestrel         ###   ########.fr       */
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
		this->_knownMaterias[i] = toCopy._knownMaterias[i]->clone();
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
	this->_size = toCopy._size;
	this->_copyMaterias(toCopy);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &toCopy)
{
	if (this != &toCopy)
	{
		this->_destroyMaterias();
		this->_size = toCopy._size;
		this->_copyMaterias(toCopy);
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (unsigned int i = 0; i < this->_size; i++)
	{
		if (this->_knownMaterias[i] != NULL)
		{
			this->_knownMaterias[i] = materia->clone();
			return;
		}
	}
	std::cout << "This Source can't learn more Materias" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (unsigned int i = 0; i < this->_size; i++)
	{
		if (this->_knownMaterias[i]->getType() == type)
			return (this->_knownMaterias[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource(void)
{
	this->_destroyMaterias();
}