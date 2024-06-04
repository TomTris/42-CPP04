/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:44:04 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 20:59:59 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal() {std::cout << "An Animal was left." << std::endl;}
Animal::Animal() {
	std::cout << "An Animal was born ... tick tock tick tock ..." << std::endl;
	type = "";
}

Animal::Animal(Animal & src)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	if (this != &src)
		type = src.type;
}
Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Animal Copy Assignation called" << std::endl;
	type = src.type;
	return (*this);
}

void Animal::makeSound(void)
{
	std::cout << "Animal Animal Animal Animal" << std::endl;
}
