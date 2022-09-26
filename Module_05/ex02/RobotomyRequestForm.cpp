#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = "No target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequestForm", 72, 45)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->Target = other.Target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execution() const
{
	std::cout << "Bzzzzzzzzz" << std::endl;
	srand((long) this);
	if (rand() & 1)
		std::cout << this->Target <<" has been robotomized successfully" << std::endl;
	else
		std::cout << "fail" << std::endl;
}