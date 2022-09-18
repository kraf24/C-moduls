#include"WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called!" << std::endl;
	this->setType("Cat");
}

WrongCat::WrongCat(const WrongCat &cat)
{
	*this = cat;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << ":/" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	this->setType(cat.getType());
	return *this;
}

std::ostream &operator<<(std::ostream &o, WrongCat &animal)
{
	o << animal.getType();
	return o;
}