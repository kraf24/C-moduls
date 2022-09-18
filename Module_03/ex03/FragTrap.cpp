#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->Name = "Ostin";
	this->HitPoints = 100;
	this->EnrPoints = 100;
	this->AtkPoints = 30;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "FragTrap: constructor called" << std::endl;
	this->Name = Name;
	this->HitPoints = 100;
	this->EnrPoints = 100;
	this->AtkPoints = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap: constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnrPoints = other.EnrPoints;
	this->AtkPoints = other.AtkPoints;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "DEATH" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "ScavTrap " << this->Name << " gives five." << std::endl;
}
