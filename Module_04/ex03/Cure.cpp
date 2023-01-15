#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &Cure)
{
	*this = Cure;
}

Cure* Cure::operator=(const Cure &Cure)
{
	this->type = Cure.type;
	return(*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: *  heals < " << target.getName() << "’s wounds *" << std::endl;
}