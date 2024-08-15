#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Brain
{
private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(const Brain &toCopy);
	Brain &operator=(const Brain &toCopy);
	void printIdeas(void) const;
	~Brain(void);
};
#endif