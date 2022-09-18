#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
	ScavTrap robot("bethan");
	ScavTrap robot1(robot);

	robot1.guardGate();
	return (0);
}