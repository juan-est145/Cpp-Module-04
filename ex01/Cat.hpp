#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat(void);
	Cat(const Cat &toCopy);
	Cat &operator=(const Cat &toCopy);
	void makeSound(void) const;
	~Cat(void);
};
#endif