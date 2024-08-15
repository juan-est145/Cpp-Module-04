/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:44:48 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 21:01:49 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(-5, *bob);
	me->use(600, *bob);
	me->use(0, *bob);
	
	me->unequip(45);
	me->unequip(1);
	me->use(1, *bob);
	me->equip(src->createMateria("ice"));
	me->use(1, *bob);
	
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	
	
	me->unequip(1);
	me->equip(src->createMateria("cure"));
	me->use(1, *bob);

	src->learnMateria(src->createMateria("ice"));

	IMateriaSource *newSrc = new MateriaSource();
	newSrc->learnMateria(new Cure());
	src->learnMateria(newSrc->createMateria("cure"));
	src->learnMateria(new Ice());
	
	delete bob;
	delete me;
	delete src;
	delete newSrc;

	return (0);
}