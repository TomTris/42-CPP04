/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:44:04 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 22:15:39 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "An Animal left." << std::endl;
}
Animal::Animal()
{
	std::cout << "An Animal was born ... tick tock tick tock ..." << std::endl;
	type = "animal";
}

Animal::Animal(Animal & src)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Animal Copy Assignation called" << std::endl;
	type = src.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal Animal Animal Animal" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}
