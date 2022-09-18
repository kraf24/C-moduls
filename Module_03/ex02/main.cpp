#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main()
{
	ScavTrap robot("bethan");
	ScavTrap robot1(robot);
	FragTrap robot2;

	robot1.guardGate();
	robot2.highFivesGuys();
	return (0);
}