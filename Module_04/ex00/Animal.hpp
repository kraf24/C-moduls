#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include"iostream"
#include"string"

class Animal
{
protected:
	std::string Type;
public:
	Animal();
	Animal(const Animal &animal);
	virtual ~Animal();
	Animal &operator=(const Animal &animal);

	void setType(std::string type);
	std::string getType() const;
	virtual void makeSound() const;
};

std::ostream &operator<<(std::ostream &o, const Animal &animal);

#endif