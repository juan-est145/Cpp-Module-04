/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:57:14 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/09 11:58:18 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor was called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &toCopy) : WrongAnimal(toCopy)
{
	std::cout << "WrongCat copy constructor was called" << std::endl;
	*this = toCopy;
}

WrongCat &WrongCat::operator=(const WrongCat &toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Weird meeeeoowwws??" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor was called" << std::endl;
}