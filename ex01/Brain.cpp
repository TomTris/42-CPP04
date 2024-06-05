/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:49:24 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 23:30:23 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain()
{
	std::cout << "The brain of a timeless genius is gone." << std::endl;
}

Brain::Brain(void)
{
	int i = -1;

	std::cout << "A genius Brain was born!" << std::endl;
	while (++i < 100)
		ideas[i] = "";
}

Brain::Brain(Brain & src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	if (this != &src)
		*this = src;
}

Brain & Brain::operator=(Brain const & src)
{
	std::cout << "Brain Copy Assignation called" << std::endl;
	int i = -1;
	while (++i < 100)
		ideas[i] = src.ideas[i];
	return *this;
}

std::string Brain::getIdea(int nbr)
{
	if (nbr < 0 || nbr >= 100)
		return (NULL);
	return (ideas[nbr]);
}

void Brain::setIdea(int nbr, std::string idea)
{
	if (nbr < 0 || nbr >= 100)
		std::cout << "For efficiency, this brain has 100 ideas from 0 to 99. Please choose another number" << std::endl;
	else
		ideas[nbr] = idea;
}
