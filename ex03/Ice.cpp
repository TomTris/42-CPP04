/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:41:31 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 12:48:44 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice()
{
	std::cout << "A Ice left" << std::endl;
}

Ice::Ice() : AMateria ("Ice")
{
	std::cout << "A Ice was born" << std::endl;
}

Ice::Ice(Ice & src) : AMateria(src.getType())
{
	std::cout << "A Ice was born" << std::endl;
}

Ice & Ice::operator=(Ice &  src)
{
	if (src._type != "Ice")
	{
		std::cout << "Sth wrong in Ice Assignation operator called" << std::endl;
		return *this;
	}
	std::cout << "Ice Copy Assignation called" << std::endl;
	return (*this);
}

Ice *Ice::clone(void) const
{
	std::cout << "An Ice clone will be created" << std::endl;
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout <<  "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}

// #include "Ice.hpp"

// Ice::~Ice()
// {
	
// }

// Ice::Ice() : AMateria("ice")
// {
// }

// Ice::Ice(Ice &  src) : AMateria(src._type)
// {
// }

// Ice & Ice::operator=(Ice & src)
// {
// 	if (src._type != "ice")
// 		std::cout << "Sth wrong in Assignation operator called" << std::endl;
// 	return (*this);
// }

// Ice *Ice::clone(void) const
// {
// 	return (new Ice());
// }