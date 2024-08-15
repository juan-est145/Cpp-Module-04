/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:18:14 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 20:30:54 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::_initInventory(void)
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_inventory[i] = NULL;
}

void Character::_destroyInventory(void)
{
	for (unsigned int i = 0; i < this->_size; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

void Character::_copyInventory(const Character &toCopy)
{
	for (unsigned int i = 0; i < this->_size; i++)
			this->_inventory[i] = toCopy._inventory[i]->clone();	
}
void Character::_initGround(void)
{
	for (unsigned int i = 0; i < this->_groundSize; i++)
		this->_ground[i] = NULL;
}

void Character::_destroyGround(void)
{
	for (unsigned int i = 0; i < this->_groundSize; i++)
	{
		if (this->_ground[i] != NULL)
			delete this->_ground[i];
	}
}

void Character::_copyGround(const Character &toCopy)
{
	for (unsigned int i = 0; i < this->_groundSize; i++)
			this->_ground[i] = toCopy._ground[i]->clone();	
}


void Character::_dropToGround(AMateria *toDrop)
{
	static unsigned int index = 0;

	//This line destroys the most recent materia if the floor is full
	if (this->_ground[index] != NULL)
		delete this->_ground[index];
	this->_ground[index] = toDrop;
	index = (index + 1) % this->_groundSize;
}

Character::Character(void) 
{
	this->_size = (unsigned int)(sizeof(this->_inventory) / sizeof(this->_inventory[0]));
	this->_groundSize = (unsigned int)(sizeof(this->_ground) / sizeof(this->_ground[0]));
	this->_initInventory();
	this->_initGround();
}

Character::Character(std::string name)
{
	this->_size = (unsigned int)(sizeof(this->_inventory) / sizeof(this->_inventory[0]));
	this->_groundSize = (unsigned int)(sizeof(this->_ground) / sizeof(this->_ground[0]));
	this->_name = name;
	this->_initInventory();
	this->_initGround();
	std::cout << "Character " << this->_name << " has been spawned into this cruel world" << std::endl;
}

Character::Character(const Character &toCopy)
{
	this->_size = toCopy._size;
	this->_groundSize = toCopy._groundSize;
	this->_name = toCopy._name;
	this->_copyInventory(toCopy);
	this->_copyGround(toCopy);
}

Character &Character::operator=(const Character &toCopy)
{
	if (this != &toCopy)
	{
		this->_size = toCopy._size;
		this->_groundSize = toCopy._groundSize;
		this->_name = toCopy._name;
		this->_destroyInventory();
		this->_destroyGround();
		this->_copyInventory(toCopy);
		this->_copyGround(toCopy);
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (unsigned int i = 0; i < this->_size; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " has been stored at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full, cannot save that materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || (unsigned int)idx >= this->_size || this->_inventory[idx] == NULL)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	this->_dropToGround(this->_inventory[idx]);
	std::cout << "Unequiped Materia " << this->_inventory[idx]->getType() << std::endl;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || (unsigned int)idx >= this->_size || this->_inventory[idx] == NULL)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

Character::~Character(void)
{
	this->_destroyInventory();
	this->_destroyGround();
	std::cout << "Character " << this->_name << " has been destroyed" << std::endl;
}
