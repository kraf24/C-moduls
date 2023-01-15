
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &ice)
{
	*this = ice;
}

Ice* Ice::operator=(const Ice &Ice)
{
	this->type = Ice.type;
	return(*this);
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}