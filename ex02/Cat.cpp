/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:50:54 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 23:18:15 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "A Cat left." << std::endl;
	delete this->brain;
}

Cat::Cat() : Animal()
{
	std::cout << "An Cat was born ... tick tock tick tock ..." << std::endl;
	type = "Cat";
	brain = new Brain;
	if (brain == NULL)
		std::cerr << "Allocated new Brain failed" << std::endl;
}

Cat::Cat(Cat & src) : Animal(src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	brain = new Brain;
	if (brain == NULL)
	{
		std::cerr << "Allocated new Brain failed" << std::endl;
		return ;
	}
	*this = src;
}

Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat Copy Assignation called" << std::endl;
	if (this != &src)
	{
		type = src.type;
		this->brain = src.brain;
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat Cat Cat Cat" << std::endl;
}

std::string Cat::getType(void) const
{
	return (type);
}
