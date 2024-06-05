/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:21:25 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 22:01:48 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {std::cout << "An WrongAnimal left." << std::endl;}

WrongAnimal::WrongAnimal() {
	std::cout << "An WrongAnimal was born ... tick tock tick tock ..." << std::endl;
	type = "wrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal & src)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	if (this != &src)
		type = src.type;
}
WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy Assignation called" << std::endl;
	type = src.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal WrongAnimal WrongAnimal WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}
