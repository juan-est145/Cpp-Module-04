#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <cstdlib>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_knownMaterias[4];
	unsigned int _size;
	void _initMaterias(void);
	void _copyMaterias(const MateriaSource &toCopy);
	void _destroyMaterias(void);

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &toCopy);
	MateriaSource &operator=(const MateriaSource &toCopy);
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
	~MateriaSource(void);
};
#endif