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
	AMateria *_ground[20];
	unsigned int _size;
	unsigned int _groundSize;
	void _initInventory(void);
	void _destroyInventory(void);
	void _copyInventory(const Character &toCopy);
	void _dropToGround(AMateria *toDrop);
public:
	Character(void);
	Character(std::string name);
	Character(const Character &toCopy);
	Character &operator=(const Character &toCopy);
	std::string const &getName(void) const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	~Character(void);
};
#endif