/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:21:25 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 22:22:29 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat left." << std::endl;
	delete this->brain;
}
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "An WrongCat was born ... tick tock tick tock ..." << std::endl;
	type = "WrongCat";
	brain = new Brain;
	if (brain == NULL)
		std::cerr << "Allocated new Brain failed" << std::endl;
}

WrongCat::WrongCat(WrongCat & src) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = src;
}
WrongCat & WrongCat::operator=(WrongCat const & src)
{
	std::cout << "WrongCat Copy Assignation called" << std::endl;
	if (this != &src)
	{
		int i = -1;
		while (++i < 100)
			brain[i] = src.brain[i];
	}
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat WrongCat WrongCat WrongCat" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (type);
}
