#include"iostream"

class ClapTrap
{
	private:
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