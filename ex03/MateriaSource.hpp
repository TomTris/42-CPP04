/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:18:22 by qdo               #+#    #+#             */
/*   Updated: 2024/06/07 13:25:02 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource {

private:
	AMateria *learned[4];

public:
	~MateriaSource();
	MateriaSource();
	MateriaSource(MateriaSource &  src);
	MateriaSource & operator=(MateriaSource &  src);

	void learnMateria(AMateria* src);
	AMateria* createMateria(std::string const & type);
};

#endif
