#include"Zombie.hpp"
#include<cstdlib>


void Zombie::ChangeName(std::string name)
{
	Name = name;
}

Zombie::Zombie()
{
}

std::string RandName()
{
	srand(time(NULL));
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