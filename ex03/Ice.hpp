/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:41:28 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 12:09:47 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

public:
	~Ice();
	Ice();
	Ice(Ice &  src);

	Ice & operator=(Ice &  src);
	Ice * clone(void) const;
	void	use(ICharacter &target);
};

#endif
