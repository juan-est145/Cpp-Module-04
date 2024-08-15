#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &toCopy);
	Ice &operator=(const Ice &toCopy);
	AMateria *clone() const;
	// virtual void use(ICharacter &target); Character interface pending to be created
	~Ice(void);
};
#endif