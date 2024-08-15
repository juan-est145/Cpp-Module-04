#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[4];
	void _initInventory(void);
	void _destroyInventory(void);
	void _copyInventory(const Character &toCopy);
public:
	Character(void);
	Character(std::string name);
	Character(const Character &toCopy);
	Character &operator=(const Character &toCopy);
	~Character(void);
};
#endif