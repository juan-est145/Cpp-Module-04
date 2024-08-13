#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat &toCopy);
	WrongCat &operator=(const WrongCat &toCopy);
	void makeSound(void) const;
	std::string getType(void) const;
	~WrongCat(void);
};
#endif