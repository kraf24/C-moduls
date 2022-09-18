#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->Name = "Ostin";
	ClapTrap::Name = "Ostin_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnrPoints = ScavTrap::EnrPoints;
	this->AtkPoints = FragTrap::AtkPoints;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout << "DiamondTrap: constructor called" << std::endl;
	this->Name = Name;
	ClapTrap::Name = Name + "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnrPoints = ScavTrap::EnrPoints;
	this->AtkPoints = FragTrap::AtkPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap: constructor called" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->Name = other.Name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DEATH" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiomandTrap name: " << this->Name << " CrapTrap name: " << ClapTrap::Name << std::endl;
}