#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class AMateria
{
protected:
	std::string _type;

public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(const AMateria &toCopy);
	AMateria &operator=(const AMateria &toCopy);
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	// virtual void use(ICharacter &target); Character interface pending to be created
	virtual ~AMateria(void);
};
#endif