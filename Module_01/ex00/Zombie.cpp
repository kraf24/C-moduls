#include"Zombie.hpp"




Zombie::Zombie(std::string name)
{
	Name = name;
}

std::string RandName()
{
	std::string NameList[5] = 
	{
		"Bob",
		"Santiago",
		"Andrey",
		"Sasha",
		"Anton"
	};
	return (NameList[rand() % 5 + 0]);

}

void Zombie::announce(void)
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->Name <<": :(" << std::endl;
}