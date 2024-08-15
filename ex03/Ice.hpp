#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &toCopy);
	Ice &operator=(const Ice &toCopy);
	AMateria *clone() const;
	void use(ICharacter &target);
	~Ice(void);
};
#endif