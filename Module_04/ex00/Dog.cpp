#include"Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog &dog)
{
	this->setType(dog.getType());
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->setType(dog.getType());
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Dog &dog)
{
	o << dog.getType();
	return o;
}

void Dog::makeSound() const
{
	std::cout << "bark bark!!" << std::endl;
}
