/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:17:10 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 12:09:49 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

public:
	~Cure();
	Cure();
	Cure(Cure &  src);

	Cure & operator=(Cure &  src);
	Cure * clone(void) const;
	void	use(ICharacter &target);
};

#endif
