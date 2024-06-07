/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:40:02 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 14:23:15 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void saver(AMateria *src, int del)
{
	static AMateria *a[10001];
	static int		nbr = 0;

	if (nbr == 0)
		for (int i = 0; i < 1001; i++)
			a[i] = NULL;
	if (del > 0)
	{
		for (int i = 0; i < nbr; i++)
			delete a[i];
		nbr = 0;
		return ;
	}
	if (src == 0)
		return ;
	if (nbr == 1000)
	{
		a[0] = src;
		nbr = 1;
		return ;
	}
	a[nbr] = src;
	nbr++;
}

void ft_tests()
{
	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTORS:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	// Create Materia 
	std::cout << "CREATE MATERIA:" << std::endl;
	std::cout << "-----------------------" << std::endl;

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("fire"));
	std::cout << std::endl;

	// Use on a new character
	std::cout << "USE ON A NEW CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	me->use(2, *bob); // Use an empty / non existing slot in inventory
	me->use(-4, *bob);
	me->use(18, *bob);
	std::cout << std::endl;

	// Deep copy character
	std::cout << "DEEP COPY CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	Character	*charles = new Character("Charles");
	charles->equip(src->createMateria("cure"));
	charles->equip(src->createMateria("ice"));
	charles->equip(src->createMateria("earth"));
	Character	*charles_copy = new Character(*charles);
	std::cout << std::endl;

	// Deep copy vs its source character
	std::cout << "DEEP COPY VS SOURCE:" << std::endl;
	std::cout << "-----------------------" << std::endl;


	saver(charles->aMa_idx(0), 0);
	charles->unequip(0); // this shows that they have different materia pointers equipped

	saver(charles_copy->aMa_idx(1), 0);
	charles_copy->unequip(1); //this will produce a leak if we don't store the address somewhere else before

	charles_copy->equip(src->createMateria("cure"));
	charles_copy->equip(src->createMateria("ice"));
	std::cout << std::endl;

	charles->use(0, *bob);
	charles->use(1, *bob);
	charles->use(2, *bob);
	charles->use(3, *bob);
	std::cout << std::endl;
	charles_copy->use(0, *bob);
	charles_copy->use(1, *bob);
	charles_copy->use(2, *bob);
	charles_copy->use(3, *bob);
	std::cout << std::endl;

	// Unequip tests:
	std::cout << "UNEQUIP:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	saver(me->aMa_idx(-1), 0);
	me->unequip(-1);
	saver(me->aMa_idx())
	me->unequip(18);
	saver(me->aMa_idx())
	me->unequip(3);
	std::cout << std::endl;
	me->use(1, *charles);
	saver(me->aMa_idx())
	me->unequip(1);
	me->use(1, *charles); // try to use it
	std::cout << std::endl;

	// Destructors
	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	delete charles;
	delete charles_copy;
	delete tmp1;
	delete tmp2;
	std::cout << std::endl;
	//system("leaks ex03");
}

int main()
{
	ft_tests();
	// Leaks check
	// std::cout << "LEAKS:" << std::endl;
	// std::cout << "-----------------------" << std::endl;
	system("leaks a.out");
	return (0);
}