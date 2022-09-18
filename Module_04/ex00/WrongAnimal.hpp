#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include"iostream"
#include"string"

class WrongAnimal
{
protected:
	std::string Type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &animal);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &animal);

	void setType(std::string type);
	std::string getType() const;
	virtual void makeSound() const;
};

std::ostream &operator<<(std::ostream &o, const WrongAnimal &animal);

#endif