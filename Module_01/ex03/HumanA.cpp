#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep):weapon(wep),name(name)
{
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{}