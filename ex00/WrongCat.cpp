/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:21:25 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 18:43:43 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat() {std::cout << "An WrongCat left." << std::endl;}
WrongCat::WrongCat() {
	std::cout << "An WrongCat was born ... tick tock tick tock ..." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat & src)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	if (this != &src)
		type = src.type;
}
WrongCat & WrongCat::operator=(WrongCat const & src)
{
	std::cout << "WrongCat Copy Assignation called" << std::endl;
	type = src.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat WrongCat WrongCat WrongCat" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (type);
}
