/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:50:54 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 20:58:11 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "A Cat left." << std::endl;
}
Cat::Cat() : Animal()
{
	std::cout << "An Cat was born ... tick tock tick tock ..." << std::endl;
	type = "Cat";
}

Cat::Cat(Cat & src) : Animal(src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	if (this != &src)
		type = src.type;
}
Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat Copy Assignation called" << std::endl;
	type = src.type;
	return (*this);
}

void Cat::makeSound(void)
{
	std::cout << "Cat Cat Cat Cat" << std::endl;
}
