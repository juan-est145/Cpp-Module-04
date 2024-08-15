#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(const Cure &toCopy);
	Cure &operator=(const Cure &toCopy);
	AMateria *clone() const;
	void use(ICharacter &target);
	~Cure(void);
};
#endif