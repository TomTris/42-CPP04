/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:52:59 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 18:42:18 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "A Dog left." << std::endl;
}
Dog::Dog() : Animal()
{
	std::cout << "An Dog was born ... tick tock tick tock ..." << std::endl;
	type = "Dog";
}

Dog::Dog(Dog & src) : Animal(src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	if (this != &src)
		type = "Dog";
}
Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog Copy Assignation called" << std::endl;
	type = src.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog Dog Dog Dog" << std::endl;
}

std::string Dog::getType(void) const
{
	return (type);
}
