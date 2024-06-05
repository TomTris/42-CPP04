/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:54:41 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 19:40:43 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal *a = new Animal;
		const Animal *c = new Animal;
		std::cout << a->getType() << std::endl;
		std::cout << c->getType() << std::endl;
		a->makeSound();
		c->makeSound();
	}
		std::cout << "------------------------" << std::endl;
	{
		const Animal *a = new Dog;
		const Animal *c = new Dog;
		std::cout << a->getType() << std::endl;
		std::cout << c->getType() << std::endl;
		a->makeSound();
		c->makeSound();
	}
		std::cout << "------------------------" << std::endl;
	{
		const Animal *a = new Cat;
		const Animal *c = new Cat;
		std::cout << a->getType() << std::endl;
		std::cout << c->getType() << std::endl;
		a->makeSound();
		c->makeSound();
	}
		std::cout << "------------------------" << std::endl;
	{
		const WrongAnimal *a = new WrongCat;
		const WrongAnimal *c = new WrongCat;
		std::cout << a->getType() << std::endl;
		std::cout << c->getType() << std::endl;
		a->makeSound();
		c->makeSound();
	}
		std::cout << "------------------------" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
	}
		return 0;
}