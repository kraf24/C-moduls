#include"ClapTarp.hpp"

ClapTrap::ClapTrap(): Name("Ostin"),HitPoints(10), EnrPoints(10), AtkPoints(5) 
{
	std::cout << "Ostin created" << std::endl;
}

ClapTrap::ClapTrap(std::string Name): Name(Name), HitPoints(10), EnrPoints(10), AtkPoints(2)
{
	std::cout<< Name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "NPC died" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->Name = other.Name;
	return(*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->EnrPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << std::ends;
		std::cout <<  ", causing " << this->AtkPoints << " points of damage!" << std::endl;
		this->EnrPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints > amount)
	{
		std::cout << "ClapTrap " << this->Name << " takes damage " << amount << std::endl;

	}
	else
	{
		if(this->HitPoints == 0)
			{
				std::cout << this->Name <<"is alredy dead!!!" << std::endl;
				return;
			}
		this->HitPoints = 0;
		std::cout << "ClapTrap " << this->Name << " takes damage " << amount << " and died!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints > 0 && this->EnrPoints > 0)
	{
		this->EnrPoints--;
		if ((HitPoints + amount) > 10)
			{
				HitPoints = 10;
				std::cout << "ClapTrap " << this->Name << " get max HP " << amount << std::endl;
				return;
			}
		this->HitPoints += amount;
		std::cout << "ClapTrap " << this->Name << " get HP " << amount << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << " don't have energy or dead!!! " << std::endl;
}