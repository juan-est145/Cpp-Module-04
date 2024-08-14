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
	virtual AMateria *clone() const;
	~Ice(void);
};
#endif