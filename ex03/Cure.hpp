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
	// virtual void use(ICharacter &target); Character interface pending to be created
	~Cure(void);
};
#endif