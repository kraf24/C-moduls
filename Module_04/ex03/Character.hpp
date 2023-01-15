#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria	*inv[4];
	int			size;
public:
	Character(const std::string &name);
	Character(const Character &other);
	~Character();

	Character& operator=(const Character &other);
	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
