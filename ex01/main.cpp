/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:54:41 by qdo               #+#    #+#             */
/*   Updated: 2024/06/06 16:02:04 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main2( void )
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << std::endl;

	Dog  d1;
	Dog  d2;
	std::cout << "--" << std::endl;
	d1 = d2;
	std::cout << "--" << std::endl;
	(d1).compareTo(d2);

	std::cout << "\n\n-------\n\n" << std::endl;
	// Array of animals
	const Animal	*(animal_array[4]);
	std::cout << "--------" << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;
	return (0);
}

int	main(void)
{
	main2();
	system("leaks a.out");
}