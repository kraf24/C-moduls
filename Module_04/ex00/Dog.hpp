#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();
	Dog(const Dog &dog);
	~Dog();
	Dog &operator=(const Dog &dog);

	void makeSound() const;
	
};

std::ostream &operator<<(std::ostream &o, const Dog &animal);

#endif