#include"ClapTrap.hpp"

int main()
{
	ClapTrap Herroo;
	ClapTrap enemy1("Goblim");
	ClapTrap enemy2("Zombie");

	Herroo.attack("Goblim");
	Herroo.attack("Zombie");

	enemy1.takeDamage(5);
	enemy2.takeDamage(5);

	return (0);
}