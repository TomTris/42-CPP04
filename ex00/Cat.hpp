/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:38:21 by qdo               #+#    #+#             */
/*   Updated: 2024/06/05 18:38:49 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:
	~Cat();
	Cat();
	Cat(Cat & src);
	Cat & operator=(Cat const & src);

	std::string getType(void) const;
	void makeSound(void) const ;

};

#endif
