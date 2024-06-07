/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:47:10 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 15:31:11 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter(std::string name) : _name(name)
{

}

Character::~Character()
{
	std::cout << "Character " << _name << " left" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	for (int i = 0; i < 1001; i++)
		if (to_del[i] != NULL)
			delete to_del[i];
}

Character::Character() : ICharacter("qdo")
{
	std::cout << "Character " << _name << " was born" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 1001; i++)
		to_del[i] = NULL;
}

Character::Character(std::string name) : ICharacter(name)
{
	std::cout << "Character " << _name << " was born" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 1001; i++)
		to_del[i] = NULL;
}

Character::Character(Character & src) : ICharacter(src.getName() + "_copy")
{
	std::cout << "Character " << _name << " was born" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 1001; i++)
		to_del[i] = NULL;
	*this = src;
}

Character & Character::operator=(Character & src)
{
	std::cout << src.getName() << " Assignation called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src.inventory[i] != NULL)
			this->inventory[i] = (src.inventory[i])->clone();
	}
	return (*this);
}
std::string const & Character::getName() const
{
	return _name;
}

//somthing empty? add to that place
// not empty? delete the last and add the new to there.
void Character::equip(AMateria *src)
{
	int i = 0;

	if (src == 0)
		return ;
	while (this->inventory[i] && i < 4)
		i++;
	if (i == 4)
	{
		delete this->inventory[3];
		this->inventory[3] = src;
		return ;
	}
	(this->inventory[i]) = src;
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
		return ;

	int i = 0;
	while (i < 1001 && to_del[i] != NULL)
		i++;
	if (i == 1001)
	{
		for (int j = 0; j < 1001; j++)
		{
			delete to_del[j];
			to_del[j] = NULL;
		}
		i = 0;
	}
	to_del[i] = inventory[idx];
	inventory[idx] = 0;
}


void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
	{
		if (idx < 0 || idx >= 4)
			std::cout << _name << " tried to do sth with " << target.getName() << " with an invalid idx hahaha" << std::endl;
		std::cout << _name << " tried to do sth with " << target.getName() << " with an empty index hahaha" << std::endl;
		return ;
	}
	std::cout << _name << " ";
	inventory[idx]->use(target);
	// if (inventory[idx]->getType() == "cure")
		// std::cout << _name << " heals " << target.getName() << "'s wounds!" << std::endl;
	// else if (inventory[idx]->getType() == "ice")
	// 	std::cout << _name << " shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria *Character::aMa_idx(int idx)
{
	if (idx < 0 || idx > 3 )
		return (NULL);
	return (inventory[idx]);
}
