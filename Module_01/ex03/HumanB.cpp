#include<HumanB.hpp>

HumanB::HumanB( std::string name ): name(name)
{}

void HumanB::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &type)
{
	weapon = &type;
}