/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:18:21 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 14:03:38 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
	std::cout << "a MateriaSource left" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->learned[i] != NULL)
	 		delete this->learned[i];
}
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource & src)
{
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
	*this = src;
}
MateriaSource & MateriaSource::operator=(MateriaSource & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.learned[i] != NULL)
			this->learned[i] = src.learned[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] != NULL && src->getType() == this->learned[i]->getType())
		{
			std::cout << "This Materia is already learned. This new Materia will be deleted" << std::endl;
			delete src;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->learned[i] == NULL)
		{
			std::cout << "This Materia is now learned." << std::endl;
			this->learned[i] = src;
			return ;
		}
	}
	std::cout << "This MateriaSource learned already 4 Sources, can't learn more. This new Materia will be deleted" << std::endl;
	delete src;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < 4)
	{
		if (learned[i] != NULL && learned[i]->getType() == type)
		{
			return (learned[i]->clone());
		}
		i++;
	}
	std::cout << "This type is not learned" << std::endl;
	return (NULL);
}

