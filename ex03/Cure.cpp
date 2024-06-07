/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:16:16 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 14:39:42 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure()
{
	std::cout << "A Cure left" << std::endl;
}

Cure::Cure() : AMateria ("cure")
{
	std::cout << "A Cure was born" << std::endl;
}

Cure::Cure(Cure & src) : AMateria(src.getType())
{
	std::cout << "A Cure was born" << std::endl;
}

Cure & Cure::operator=(Cure &  src)
{
	if (src._type != "cure")
	{
		std::cout << "Sth wrong in Cure Assignation operator called" << std::endl;
		return *this;
	}
	std::cout << "Cure Copy Assignation called" << std::endl;
	return (*this);
}

Cure *Cure::clone(void) const
{
	Cure *a = new Cure();
	std::cout << "An Cure clone is created" << std::endl;
	return (a);
}

void	Cure::use(ICharacter &target)
{
	std::cout <<  "Cure: \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}
