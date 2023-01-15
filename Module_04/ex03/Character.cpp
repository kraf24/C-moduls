#include "Character.hpp"

Character::Character(const std::string &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->inv[i];	
}

Character::Character(const Character &other)
{
	*this = other;
}

Character& Character::operator=(const Character &other)
{
	this->size = 0;
	this->name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i])
			delete this->inv[i];
		this->inv[i] = other.inv[i];
		if (other.inv[i])
			this->size++;
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->size < 4)
		this->inv[this->size++] = m;
	else
		std::cout << "Couldn't equip a " << m->getType() << ", no more space" << std::endl;
}

void Character::unequip(int idx)
{
	if (this->inv[idx])
	{
		idx++;
		while (idx < this->size)
		{
			this->inv[idx - 1] = this->inv[idx];
			idx++;
		}
		this->size--;
	}
	else
		std::cout << "Couldn't unequip a " << idx << ", materia doesn't exist" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->size)
		this->inv[idx]->use(target);
}