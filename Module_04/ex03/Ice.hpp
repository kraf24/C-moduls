#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &ice);
		
		Ice*		operator=(const Ice &Ice);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};
