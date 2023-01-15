#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->Name = "Ostin";
	this->HitPoints = 100;
	this->EnrPoints = 50;
	this->AtkPoints = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "ScavTrap: constructor called" << std::endl;
	this->Name = Name;
	this->HitPoints = 100;
	this->EnrPoints = 50;
	this->AtkPoints = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap: constructor called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnrPoints = other.EnrPoints;
	this->AtkPoints = other.AtkPoints;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "DEATH" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in Gatekeeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->EnrPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << std::ends;
		std::cout <<  ", causing " << this->AtkPoints << " points of damage!" << std::endl;
		this->EnrPoints--;
	}
}