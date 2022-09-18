#include"Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meau meau!!" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->setType(cat.getType());
	return *this;
}

std::ostream &operator<<(std::ostream &o, Animal &animal)
{
	o << animal.getType();
	return o;
}