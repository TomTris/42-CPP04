/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:38:21 by qdo               #+#    #+#             */
/*   Updated: 2024/06/06 16:03:01 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

private:
	Brain	*brain;

public:
	virtual ~Dog();
	Dog();
	Dog(Dog & src);
	Dog & operator=(Dog const & src);

	std::string getType(void) const;
	void makeSound(void) const ;
	void compareTo(Dog const & src) const;
};


#endif

