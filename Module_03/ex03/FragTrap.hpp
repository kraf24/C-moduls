#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

	void attack(const std::string &target);
	void highFivesGuys();
};

#endif