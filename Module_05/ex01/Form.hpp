#ifndef FORM_HPP
#define FORM_HPP
#pragma once
#include"iostream"
class Bureaucrat;
#include"Bureaucrat.hpp"
#define Max 150
#define Min 1

class Form
{
private:
	const std::string Name;
	bool indicat;
	const int signedGrade;
	const int executeGrade;
public:
	Form();
	Form(std::string name, int signedgrade, int executegrade);
	Form(const Form &form);
	~Form();

	Form &operator=(const Form &form);

	std::string getName() const;
	bool	getIsSigned() const;
	int		getGradeToSigne() const;
	int		getGradeToExecute() const;

	 void beSigned(Bureaucrat &other);

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, const Form &b);

#endif