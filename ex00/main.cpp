/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:54:41 by qdo               #+#    #+#             */
/*   Updated: 2024/06/04 20:57:28 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	
	Animal a;
	Animal b(a);
	Animal c;
	c = a;
	a.makeSound();
	b.makeSound();
	c.makeSound();

	Animal a1;
	Animal b1(a1);
	Animal c1;
	c1 = a1;
	a1.makeSound();
	b1.makeSound();
	c1.makeSound();

	Animal a2;
	Animal b2(a2);
	Animal c2;
	c2 = a2;
	a2.makeSound();
	b2.makeSound();
	c2.makeSound();
}