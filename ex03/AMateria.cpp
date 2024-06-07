/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:34:39 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 14:40:25 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::~AMateria()
{
	std::cout << "A AMateria left" << std::endl;
}

AMateria::AMateria() : _type("")
{
	std::cout << "Default AMateria should not be called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "A AMateria named `" << _type << "' was born." << std::endl;
}

std::string const & AMateria::getType() const {return _type;}
 
void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria of here should never be called" << target.getName() << std::endl;
}
// AMateria *AMateria::clone(void) const
// {
// 	AMateria *a = NULL;

// 	if (_type == "ice")
// 		a = new Ice();
// 	else if (_type == "cure")
// 		a = new Cure();
// 	return (a);
// }
