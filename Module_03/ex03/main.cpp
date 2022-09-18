#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"

int main()
{
	// ScavTrap robot("bethan");
	// ScavTrap robot1(robot);
	// FragTrap robot2;
	DiamondTrap robot3("BOSS");

	robot3.highFivesGuys();
	robot3.guardGate();
	robot3.whoAmI();

	return (0);
}