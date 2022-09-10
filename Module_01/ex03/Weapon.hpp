#include<iostream>
#include<string.h>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	public:
		const std::string& getType();
		void setType(std::string newType);
		~Weapon();
		Weapon(std::string type);
	private:
		std::string type; 
};

#endif