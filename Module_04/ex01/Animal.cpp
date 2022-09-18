#include"Animal.hpp"

Animal::Animal()
{
	std::cout << "called defualt constructor!" << std::endl;
	this->setType("No Type");
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &animal)
{
	this->setType(animal.getType());
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Animal &animal)
{
	o << animal.getType();
	return o;
}

void Animal::setType(std::string type)
{
	this->Type = type;
}

std::string Animal::getType() const
{
	return this->Type;
}

void Animal::makeSound() const
{}
