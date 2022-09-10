#include "Zombie.hpp"

int main (void)
{
	Zombie zombie1(RandName());

	zombie1.announce();

	Zombie *zombie2 = newZombie(RandName());
	zombie2->announce();
	delete zombie2;

	randomChump(RandName());

	return (0);
}