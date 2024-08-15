/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:11:04 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/15 10:48:00 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor has been called" << std::endl;
}

Brain::Brain(const Brain &toCopy)
{
	std::cout << "Brain copy constructor has been called" << std::endl;
	*this = toCopy;
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

Brain::~Brain(void)
{
	std::cout << "Brain destructor has been called" << std::endl;
}