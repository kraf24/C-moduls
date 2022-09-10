#include "Zombie.hpp"

int main (void)
{
	int n = 10;
	Zombie* Horde;

	Horde = zombieHorde(n, RandName());
	
	for(int i = 0;i < n;i++)
		Horde[i].announce();

	delete [] Horde;

	return (0);
}