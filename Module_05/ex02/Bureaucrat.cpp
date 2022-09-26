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

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << form.getName() << " signed by " << this->Name << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->Name << " couldn’t sign " << form.getName() << " because his skill is " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->Name << " executed " << form.getName() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(bool x)
	{
		std::cerr << this->Name << " is not signed" << std::endl;
	}
}

int Bureaucrat::getGrade() const
{
	return this->Grade;
}

std::string Bureaucrat::getName() const
{
	return this->Name;
}