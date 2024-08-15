/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:11:04 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 11:12:04 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::string thoughts[] = {"Eating", "Sleeping", "Walking", "Idle"};
	unsigned int size = (unsigned int)(sizeof(this->_ideas) / sizeof(this->_ideas[0]));
	for (unsigned int i = 0; i < size; i++)
		this->_ideas[i] = thoughts[rand() % 4];
	std::cout << "Brain constructor has been called" << std::endl;
}

Brain::Brain(const Brain &toCopy)
{
	unsigned int size = (unsigned int)(sizeof(this->_ideas) / sizeof(this->_ideas[0]));
	std::cout << "Brain copy constructor has been called" << std::endl;
	for (unsigned int i = 0; i < size; i++)
		this->_ideas[i] = toCopy._ideas[i];
}

Brain &Brain::operator=(const Brain &toCopy)
{
	std::cout << "Brain copy assignmente operator has been called" << std::endl;
	if (this != &toCopy)
	{
		for (unsigned int i = 0; i < 100; i++)
			this->_ideas[i] = toCopy._ideas[i];
	}
	return (*this);
}

void Brain::printIdeas(void) const
{
	unsigned int size = (unsigned int)(sizeof(this->_ideas) / sizeof(this->_ideas[0]));
	for (unsigned int i = 0; i < size; i++)
		std::cout << this->_ideas[i] << std::endl;
	std::cout << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor has been called" << std::endl;
}