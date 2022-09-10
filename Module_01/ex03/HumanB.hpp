#include"Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void attack() const;
		~HumanB();
		void setWeapon(Weapon& type);
	private:
		Weapon *weapon;
		std::string name;

};