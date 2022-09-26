#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = "No target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardonForm", 25, 5)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->Target = other.Target;
	return *this;
}

void PresidentialPardonForm::execution() const
{
	std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}