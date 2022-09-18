#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "called WrongDefualt constructor!" << std::endl;
	this->setType("No Type");
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &animal)
{
	this->setType(animal.getType());
	return *this;
}

std::ostream &operator<<(std::ostream &o, const WrongAnimal &animal)
{
	o << animal.getType();
	return o;
}

void WrongAnimal::setType(std::string type)
{
	this->Type = type;
}

std::string WrongAnimal::getType() const
{
	return this->Type;
}

void WrongAnimal::makeSound() const
{}
