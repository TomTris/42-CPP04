/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:21:26 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 18:39:34 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:
	std::string  type;

public:
	~WrongAnimal();
	WrongAnimal();
	WrongAnimal(WrongAnimal & src);
	WrongAnimal & operator=(WrongAnimal const & src);

	std::string getType(void) const;
	void makeSound(void) const ;
};

#endif
