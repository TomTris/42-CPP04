/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:43:28 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 22:31:54 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

private:
	std::string ideas[100];

public:
	virtual ~Brain(void);
	Brain(void);
	Brain(Brain & src);
	Brain& operator=(Brain const & src);

	std::string getIdea(int nbr);
	void setIdea(int nbr, std::string idea);
};

#endif