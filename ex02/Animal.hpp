#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _type;

public:
	Animal(void);
	Animal(const Animal &toCopy);
	Animal &operator=(const Animal &toCopy);
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;
	virtual ~Animal(void);
};
#endif