#include"iostream"

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
class ClapTrap
{
	protected:
		std::string Name;
		unsigned int HitPoints;
		unsigned int EnrPoints;
		unsigned int AtkPoints;
	public:
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const &other);
		ClapTrap &operator=(ClapTrap const &other);
		~ClapTrap();

};

#endif