#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	WrongCat(const WrongCat &cat);
	~WrongCat();
	WrongCat &operator=(const WrongCat &cat);

	void makeSound() const;
};

std::ostream &operator<<(std::ostream &o, WrongCat &wronganimal);

#endif