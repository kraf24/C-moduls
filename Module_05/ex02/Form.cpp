#include"Form.hpp"

Form::Form() : Name("passport"), indicat(false), signedGrade(20), executeGrade(20)
{}

Form::Form(std::string name, int signedgrade, int executegrade) : Name(name), signedGrade(signedgrade), executeGrade(executegrade)
{
	if (signedgrade < Min || executegrade < Min)
		throw Form::GradeTooHighException();
	if (signedgrade > Max || executegrade > Max)
		throw Form::GradeTooLowException();
	this->indicat = false;
}

Form::Form(const Form &form) : Name(form.Name), signedGrade(form.signedGrade), executeGrade(form.executeGrade)
{
	*this = form;
}

Form::~Form()
{
}

Form & Form::operator=(const Form &form)
{
	if(signedGrade < Min || executeGrade < Min)
		throw Form::GradeTooHighException();
	if(signedGrade > Max || executeGrade > Max)
		throw Form::GradeTooLowException();
	this->indicat = form.indicat;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Form &b)
{
    o << "name: " << b.getName() << std::endl
      << "is signed: " << (b.getIsSigned() ? "yes" : "no") << std::endl
      << "grade to sign: " << b.getGradeToSigne() << std::endl
      << "greade to execute: " << b.getGradeToExecute() << std::endl;
    return o;
}

bool Form::getIsSigned() const
{
	return this->indicat;
}

int Form::getGradeToExecute() const
{
	return this->executeGrade;
}

int Form::getGradeToSigne() const
{
	return this->signedGrade;
}

std::string Form::getName() const
{
	return this->Name;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("tooLow");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("tooHigh");
}

void Form::beSigned(Bureaucrat & other)
{
	if (other.getGrade() > this->getGradeToSigne())
		throw Form::GradeTooLowException();
	this->indicat = true;
}

void Form::execute(Bureaucrat const &executor) const
{
	if (!(this->indicat))
		throw this->indicat;
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	this->execution();
}