/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:52:59 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 23:32:44 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "A Dog left." << std::endl;
	delete this->brain;
}
Dog::Dog() : Animal()
{
	std::cout << "An Dog was born ... tick tock tick tock ..." << std::endl;
	type = "Dog";
	brain = new Brain;
	if (brain == NULL)
		std::cerr << "Allocated new Brain failed" << std::endl;
}

Dog::Dog(Dog & src) : Animal(src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	brain = new Brain;
	if (brain == NULL)
	{
		std::cerr << "Allocated new Brain failed" << std::endl;
		return ;
	}
	*this = src;
}

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog Copy Assignation called" << std::endl;
	if (this != &src)
	{
		type = src.type;
		*brain = *(src.brain);
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog Dog Dog Dog" << std::endl;
}

std::string Dog::getType(void) const
{
	return (type);
}

void Dog::compareTo(Dog const & src) const
{
	std::cout << "Adress of left Dog: " << this << std::endl;
	std::cout << "Adress of right Dog: " << &src << std::endl;
	int i = -1;
	while (++i < 100)
	{
		std::cout << "------------" << std::endl;
		std::cout << "left Dog's " << i << ". idea: " << this->brain->getIdea(i) << std::endl;
		std::cout << "right Dog's " << i << ". idea: " << src.brain->getIdea(i) << std::endl;
	}
}