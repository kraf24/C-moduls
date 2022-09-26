#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("standart")
{
	this->Grade = Min;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
	if(grade < Min)
		throw Bureaucrat::GradeTooHighException();
	if(grade > Max)
		throw Bureaucrat::GradeTooLowException();
	this->Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::increment()
{
	if (this->Grade <= Min)
		throw Bureaucrat::GradeTooHighException();
	this->Grade -=1; 
}

void Bureaucrat::decrement()
{
	if (this->Grade >= Max)
		throw Bureaucrat::GradeTooLowException();
	this->Grade += 1;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if(Grade < Min)
		throw Bureaucrat::GradeTooHighException();
	if(Grade > Max)
		throw Bureaucrat::GradeTooLowException();
	this->Grade = bureaucrat.Grade;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return(o);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("tooLow");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("tooHigh");
}

int Bureaucrat::getGrade() const
{
	return this->Grade;
}

std::string Bureaucrat::getName() const
{
	return this->Name;
}