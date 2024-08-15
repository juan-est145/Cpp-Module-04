/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:18:14 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 18:27:33 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::_initInventory(void)
{
	unsigned int size = (unsigned int)(sizeof(this->_inventory) / sizeof(this->_inventory[0]));
	for (unsigned int i = 0; i < size; i++)
		this->_inventory[i] = NULL;
}

void Character::_destroyInventory(void)
{
	unsigned int size = (unsigned int)(sizeof(this->_inventory) / sizeof(this->_inventory[0]));
	for (unsigned int i = 0; i < size; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

void Character::_copyInventory(const Character &toCopy)
{
	unsigned int size = (unsigned int)(sizeof(this->_inventory) / sizeof(this->_inventory[0]));
	for (unsigned int i = 0; i < size; i++)
			this->_inventory[i] = toCopy._inventory[i];	
}

Character::Character(void) 
{
	this->_initInventory();
}

Character::Character(std::string name)
{
	this->_name = name;
	this->_initInventory();
	std::cout << "Character " << this->_name << " has been spawned into this cruel world" << std::endl;
}

Character::Character(const Character &toCopy)
{
	unsigned int size = (unsigned int)(sizeof(this->_inventory) / sizeof(this->_inventory[0]));
	this->_name = toCopy._name;
	for (unsigned int i = 0; i < size; i++)
		this->_inventory[i] = toCopy._inventory[i];
}

Character &Character::operator=(const Character &toCopy)
{
	if (this != &toCopy)
	{
		this->_destroyInventory();
		this->_name = toCopy._name;
		this->_copyInventory(toCopy);
	}
	return (*this);
}

Character::~Character(void)
{
	this->_destroyInventory();
	std::cout << "Character " << this->_name << " has been destroyed" << std::endl;
}
