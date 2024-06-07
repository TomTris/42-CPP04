/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:47:04 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 15:03:07 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class AMateria;

class ICharacter {

protected:
	std::string const _name;
	AMateria	*inventory[4];
	AMateria	*to_del[1001];

public:
	virtual ~ICharacter() {}
	ICharacter(std::string name);
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual AMateria* aMa_idx(int idx) = 0;
};

#endif
