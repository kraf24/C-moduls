#include"Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &wep);	
		void attack();
		~HumanA();
	private:
		Weapon *weapon;
		std::string name;
	
};