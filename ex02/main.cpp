/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:54:41 by qdo               #+#    #+#             */
/*   Updated: 2024/06/06 16:10:22 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main2( void )
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	// const Animal* animal = new Animal();
	
	dog->makeSound();
	cat->makeSound();
	// const Animal* an = new Animal();
	// an = 0;
	std::cout << std::endl;

	delete dog;
	delete cat;
	return (0);
}

int	main(void)
{
	main2();
	// system("leaks a.out");
}
