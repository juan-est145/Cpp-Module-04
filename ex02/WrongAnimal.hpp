#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &toCopy);
	WrongAnimal &operator=(const WrongAnimal &toCopy);
	void makeSound(void) const;
	std::string getType(void) const;
	~WrongAnimal(void);
};
#endif