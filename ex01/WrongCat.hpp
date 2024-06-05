/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:21:26 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 22:31:54 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

private:
	Brain *brain;

public:
	virtual ~WrongCat();
	WrongCat();
	WrongCat(WrongCat & src);
	WrongCat & operator=(WrongCat const & src);

	std::string getType(void) const;
	void makeSound(void) const ;
};

#endif
